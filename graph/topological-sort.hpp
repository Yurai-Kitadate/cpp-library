#include "../graph/graph-template/graph-template.hpp"
struct topological_sort
{
    vector<Edge<ll>> edges;
    ll v;
    vector<vector<ll>> g;
    vector<bool> used1;
    vector<ll> order;
    topological_sort(vector<Edge<ll>> e, ll n)
    {
        edges = e;
        v = n;
        g.assign(v, vector<ll>());
        used1.assign(v, false);
        rep(edges.size())
        {
            g[edges[i].from].push_back(edges[i].to);
        }
        rep(v)
        {
            sort(all(g[i]));
        }
    }

    void dfs(ll s)
    {
        used1[s] = true;
        for (auto t : g[s])
        {
            if (!used1[t])
                dfs(t);
        }
        order.push_back(s);
    }

    void setup()
    {
        rep(v)
        {
            if (!used1[i])
                dfs(i);
        }
        reverse(all(order));
    }
};
