ll modpow(ll a, ll b, ll p)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            (ans *= a) %= p;
        (a *= a) %= p;
        b /= 2;
    }
    return ans;
}
