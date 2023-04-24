
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_5_B"
#include "../../../template/template.hpp"
#include "../../../dp/cumulative_sum_2d.hpp"

int main()
{
    LL(n);
    vector<vector<ll>> xy1(n, vector<ll>(2));
    vector<vector<ll>> xy2(n, vector<ll>(2));
    rep(n)
    {
        cin >> xy1[i][0] >> xy1[i][1] >> xy2[i][0] >> xy2[i][1];
    }
    vv(ll, ruiseki, 2000, 2000);
    rep(n)
    {
        ruiseki[xy1[i][0]][xy1[i][1]] += 1;
        ruiseki[xy1[i][0]][xy2[i][1]] -= 1;
        ruiseki[xy2[i][0]][xy1[i][1]] -= 1;
        ruiseki[xy2[i][0]][xy2[i][1]] += 1;
    }
    ruiseki = cumulative_sum_2d(ruiseki);
    ll res = 0;
    rep(2000)
    {
        rep(j, 2000)
        {
            res = max(ruiseki[i][j], res);
        }
    }
    out(res);
}
