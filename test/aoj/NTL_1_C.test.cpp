#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C"
#include "../../template/template.hpp"
#include "../../math/lcm.hpp"

int main()
{
    LL(n);
    VEC(ll, a, n);
    ll res = a[0];
    rep(n)
    {
        res = lcm(res, a[i]);
    }
    out(res);
}
