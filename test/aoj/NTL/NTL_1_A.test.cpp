#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"
#include "../../../template/template.hpp"
#include "../../../math/factor.hpp"
int main()
{
    LL(n);
    auto factors = factor(n);
    print(n);
    print(": ");
    vector<ll> res;
    for (auto i : factors)
    {
        rep(_, i.second)
        {
            res.push_back(i.first);
        }
    }
    out(res);
}
