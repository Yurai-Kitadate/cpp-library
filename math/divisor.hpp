vll divisor(ll x)
{

    vll lower_divisors, upper_divisors;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            lower_divisors.push_back(i);
            if (i != x / i)
                upper_divisors.push_back(x / i);
        }
    }
    reverse(all(upper_divisors));
    for (auto divisor : upper_divisors)
        lower_divisors.push_back(divisor);
    return lower_divisors;
}
