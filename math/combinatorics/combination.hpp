struct Combination
{
    ll size;
    ll mod;
    ll f = 1;
    vector<ll> fac = {f};
    vector<ll> facinv;
    Combination(ll size, ll p)
    {
        mod = p;
        rep(i, 1, size + 1)
        {
            f = f * i % mod;
            fac.push_back(f);
        }
        f = modpow(f, mod - 2, mod);
        facinv.push_back(f);
        for (ll i = size; i > 0; i--)
        {
            // out(i);
            f = f * i % mod;
            facinv.push_back(f);
        }
        reverse(all(facinv));
    }
    ll c(ll n, ll r)
    {
        if (!(0 <= r && r <= n))
            return 0;
        return (((fac[n] * facinv[r]) % mod) * facinv[n - r]) % mod;
    }
};
