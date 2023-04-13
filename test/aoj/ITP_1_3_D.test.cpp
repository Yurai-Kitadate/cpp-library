#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"
#include "../../template/template.hpp"
#include "../../math/divisor.hpp"

int main()
{
    LL(a, b, c);
    ll res = 0;
    for (auto i : divisor(c))
    {
        if (a <= i && i <= b)
            res++;
    }
    out(res);
}
