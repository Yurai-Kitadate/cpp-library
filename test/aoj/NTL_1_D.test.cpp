#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D"
#include "../../template/template.hpp"
#include "../../math/euler-phi.hpp"
int main()
{
    LL(n);
    out(euler_phi(n));
}
