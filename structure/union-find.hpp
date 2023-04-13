struct UnionFind
{
    vector<ll> p;
    vector<ll> r;
    UnionFind(ll n)
    {
        p.resize(n, -1);
        r.resize(n, 1);
    }
    ll find(ll x)
    {
        if (p[x] == -1)
            return x;
        return p[x] = find(p[x]);
    }
    void unite(ll x, ll y)
    {
        ll xp = find(x);
        ll yp = find(y);

        if (r[xp] > r[yp])
            swap(xp, yp);
        if (r[xp] == r[yp])
            r[yp]++;
        if (xp == yp)
            return;
        p[xp] = yp;
    }
};
