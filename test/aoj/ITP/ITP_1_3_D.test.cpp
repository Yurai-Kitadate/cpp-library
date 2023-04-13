#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D"
#include "../../../template/template.hpp"
#include "../../../math/divisor.hpp"

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
