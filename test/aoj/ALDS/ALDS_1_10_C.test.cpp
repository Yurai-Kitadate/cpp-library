#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/10/ALDS1_10_C"
#include "../../../template/template.hpp"
#include "../../../dp/lcs.hpp"
int main()
{
    LL(q);
    rep(_, q)
    {
        STR(s);
        STR(t);
        out(lcs(s, t));
    }
}
