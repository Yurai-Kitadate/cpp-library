#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"
#include "../../library/template/template.hpp"
#include "../../library/math/modpow.hpp"

int main()
{
    LL(n, m);
    out(modpow(n, m, 1000000007));
}
