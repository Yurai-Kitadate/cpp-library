
// #define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A"
#define PROBLEM "https://atcoder.jp/contests/atc001/tasks/unionfind_a"
#include "../../../template/template.hpp"
#include "../../../structure/union-find.hpp"
int main()
{
    LL(n, q);
    UnionFind uf(n);
    rep(q)
    {
        LL(com, x, y);
        if (com == 0)
            uf.unite(x, y);
        if (com == 1)
        {
            if (uf.find(x) == uf.find(y))
                out(1);
            else
                out(0);
        }
    }
}
