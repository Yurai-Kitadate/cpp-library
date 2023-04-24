vector<vector<ll>> cumulative_sum_2d(vector<vector<ll>> a)
{
    rep(a.size())
    {
        rep(j, a[0].size() - 1)
        {
            a[i][j + 1] += a[i][j];
        }
    }
    rep(a[0].size())
    {
        rep(j, a.size() - 1)
        {
            a[j + 1][i] += a[j][i];
        }
    }
    return a;
}
