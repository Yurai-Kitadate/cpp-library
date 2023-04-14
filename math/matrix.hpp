template <typename T>
vector<vector<T>> mat_mul(vector<vector<T>> a, vector<vector<T>> b, ll m)
{
    vector<vector<T>> c(a.size(), vector<T>(b[0].size()));
    rep(i, a.size())
    {
        rep(k, b.size())
        {
            rep(j, b[0].size())
            {
                c[i][j] = (c[i][j] + (a[i][k] * b[k][j]) % m) % m;
            }
        }
    }
    return c;
}

template <typename T>
vector<vector<T>> mat_pow(vector<vector<T>> a, ll n, ll m)
{
    vector<vector<T>> res(a.size(), vector<T>(a.size()));
    rep(a.size())
    {
        res[i][i] = 1;
    }
    while (n)
    {
        if (n & 1)
            res = mat_mul(res, a, m);
        a = mat_mul(a, a, m);
        n /= 2;
    }
    return res;
}
template <typename T>
vector<vector<T>> mat_pow_sum(vector<vector<T>> a, ll n, ll m)
{
    vector<vector<ll>> mat(2 * a.size(), vector<ll>(2 * a.size()));
    rep(a.size())
    {
        mat[a.size() + i][a.size() + i] = 1;
        mat[a.size() + i][i] = 1;
        rep(j, a.size())
        {
            mat[i][j] = a[i][j];
        }
    }
    auto p = mat_pow(mat, n, m);
    vector<vector<ll>> t(2 * a.size(), vector<ll>(a.size()));
    rep(a.size())
    {
        t[i][i] = 1;
    }
    auto q = mat_mul(p, t, m);
    return q;
}
