#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_E"
#include "../../../template/template.hpp"
#include "../../../math/modpow.hpp"
#include "../../../math/combinatorics/combination.hpp"
int main()
{
    LL(n, k);
    ll mod = 1000000007;
    auto c = Combination(2000000, mod);
    out(c.c(k, n));
}
