#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"
#include "../../../library/template/template.hpp"

// typedef vector<vector<ll>> mat;
// mat mul(mat a, mat b)
// {
//     mat(a.size(), (b[0].size()));
// }
ll modpow(ll a, ll b, ll p)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            (ans *= a) %= p;
        (a *= a) %= p;
        b /= 2;
    }
    return ans;
}

int main()
{
    LL(n, m);
    out(modpow(n, m, 1000000007));
}
