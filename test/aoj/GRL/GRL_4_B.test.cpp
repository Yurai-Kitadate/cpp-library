#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/GRL_4_B"
#include "../../../template/template.hpp"
#include "../../../graph/topological-sort.hpp"
int main()
{
    LL(n, m);
    vector<Edge<ll>> g;
    rep(m)
    {
        LL(a, b);
        g.push_back(Edge<ll>{a, b, 1});
    }
    auto s = topological_sort(g, n);
    s.setup();
    for (auto t : s.order)
    {
        out(t);
    }
}
