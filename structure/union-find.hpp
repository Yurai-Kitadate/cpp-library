struct UnionFind
{
    vector<ll> p;
    UnionFind(size_t sz) : p(sz, -1) {}
    ll find(ll x)
    {
        if (p[x] < 0)
            return x;
        return p[x] = find(p[x]);
    }
    void unite(ll x, ll y)
    {
        ll xp = find(x);
        ll yp = find(y);
        if (xp == yp)
            return;
        if (p[xp] > p[yp])
            swap(x, y);
        p[xp] += p[yp];
        p[yp] = xp;
    }
    ll size(ll x)
    {
        return -p[find(x)];
    }
};
