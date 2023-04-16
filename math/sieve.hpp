vector<bool> get_tf_sieve(ll n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    rep(i, 2, n + 1)
    {
        if (is_prime[i])
        {
            for (ll j = 2 * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

vector<ll> get_prime_table(ll n)
{
    auto table = get_tf_sieve(n);
    vector<ll> primes;
    rep(n)
    {
        if (table[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}
