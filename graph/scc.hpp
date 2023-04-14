#include "../graph/graph-template/graph-template.hpp"
struct scc
{
    vector<Edge<ll>> edges;
    ll v;
    vector<vector<ll>> g;
    vector<vector<ll>> gr;
    vector<bool> used1;
    vector<bool> used2;
    vector<ll> group;
    vector<ll> order;

    scc(vector<Edge<ll>> e, ll n)
    {
        edges = e;
        v = n;
        g.assign(v, vector<ll>());
        gr.assign(v, vector<ll>());
        used1.assign(v, false);
        used2.assign(v, false);
        group.assign(v, -1);
        rep(edges.size())
        {
            g[edges[i].from].push_back(edges[i].to);
            gr[edges[i].to].push_back(edges[i].from);
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
    void rdfs(ll s, ll id)
    {
        group[s] = id;
        used2[s] = true;
        for (auto t : gr[s])
        {
            if (!used2[t])
                rdfs(t, id);
        }
    }

    void setup()
    {
        rep(v)
        {
            if (!used1[i])
                dfs(i);
        }
        ll label = 0;
        reverse(all(order));
        for (auto t : order)
        {
            if (!used2[t])
            {
                rdfs(t, label);
                label++;
            }
        }
    }
};
