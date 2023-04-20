#include "../structure/union-find.hpp"
#include "../graph/graph-template/graph-template.hpp"
ll kruskal(vector<Edge> g, ll n)
{
    sort(all(g));
    UnionFind uf(n);
    ll cost = 0;
    rep(g.size())
    {
        auto e = g[i];
        if (uf.find(e.from) != uf.find(e.to))
        {
            cost += e.cost;
            uf.unite(e.from, e.to);
        }
    }
    return cost;
}
