#define PROBLEM "https://atcoder.jp/contests/abc293/tasks/abc293_e"
#include "../../template/template.hpp"
#include "../../math/matrix.hpp"

int main()
{
    LL(a, x, m);
    vector<vector<ll>> mat(1, vector<ll>(1));
    mat[0][0] = a;
    out(mat_pow_sum(mat, x, m)[1][0]);
}
