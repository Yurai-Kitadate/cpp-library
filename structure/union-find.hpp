struct UnionFind
{
    vector<ll> p;
    UnionFind(ll n)
    {
        p.resize(n, -1);
    }
    ll find(ll x)
    {
        if (p[x] == -1)
            return x;
        return find(p[x]);
    }
    void unite(ll x, ll y)
    {
        ll xp = find(x);
        ll yp = find(y);
        if (xp == yp)
            return;
        p[xp] = yp;
    }
};
