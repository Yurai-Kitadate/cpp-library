#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/0009"
#include "../../../template/template.hpp"
#include "../../../math/sieve.hpp"

int main()
{
    ll n;
    auto primes = get_prime_table(1000000);
    while (cin >> n)
    {
        auto t = upper_bound(all(primes), n);
        out(t - primes.begin());
    }
}
