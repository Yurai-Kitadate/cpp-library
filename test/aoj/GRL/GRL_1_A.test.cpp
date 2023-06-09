#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A"
#include "../../../template/template.hpp"
#include "../../../graph/dijkstra.hpp"
int main()
{
    LL(v, e, r);
    Graph g(v);
    rep(e)
    {
        LL(s, t, d);
        Edge m;
        m.to = t;
        m.cost = d;
        g[s].emplace_back(m);
    }
    auto shortest = dijkstra(g, r, v);
    for (auto i : shortest)
    {
        if (i >= LINF)
            out("INF");
        else
            out(i);
    }
}
