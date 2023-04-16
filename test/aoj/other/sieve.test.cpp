#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C"
#include "../../../template/template.hpp"
#include "../../../math/sieve.hpp"

int main()
{
    auto t = get_tf_sieve(100000000);
    ll res = 0;
    LL(n);
    rep(n)
    {
        LL(a);
        res += t[a];
    }
    out(res);
}
