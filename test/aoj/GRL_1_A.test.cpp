#include "../../library/template/template.hpp"
#include "../../library/graph/graph-template/graph-template.hpp"
#include "../../library/graph/dijkstra.hpp"
int main()
{
    LL(v, e, r);
    vector<vector<Graph<ll>>> g(v);
    rep(e)
    {
        LL(s, t, d);
        Graph<ll> m;
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
