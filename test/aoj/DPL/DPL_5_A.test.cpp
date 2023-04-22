#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_A"
#include "../../../template/template.hpp"
#include "../../../math/modpow.hpp"
#include "../../../math/combination.hpp"
int main()
{
    LL(n, k);
    ll mod = 1000000007;
    out(modpow(k, n, mod));
}
