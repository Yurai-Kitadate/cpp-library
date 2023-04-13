vector<pll> factor(ll x)
{
    vector<pll> factors;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0)
        {
            factors.push_back({i, 1});
            x /= i;
            while (x % i == 0)
            {
                factors[factors.size() - 1].second++;
                x /= i;
            }
        }
    if (x != 1)
        factors.push_back({x, 1});
    return factors;
}
