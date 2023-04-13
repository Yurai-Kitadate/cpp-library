ll euler_phi(ll n)
{
    ll res = n;
    auto factors = factor(n);
    for (auto i : factors)
    {
        res = res / (i.first) * (i.first - 1);
    }
    return res;
}
