#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_A"
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
    if (s.has_cycle)
        out(1);
    else
        out(0);
}
