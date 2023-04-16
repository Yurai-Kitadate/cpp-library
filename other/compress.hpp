map<ll, ll> shrink(vector<ll> a)
{
    set<ll> s(all(a));
    map<ll, ll> t;
    auto ite = s.begin();
    rep(s.size())
    {
        t[*ite] = i;
        ite++;
    }
    return t;
}
