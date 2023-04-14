#include "../graph/graph-template/graph-template.hpp"
// https: // atcoder.jp/contests/abc223/tasks/abc223_d

struct ordered_topological_sort
{
    pq<ll> que;
    vector<Edge<ll>> edges;
    vector<ll> dig;
    ll v;
    vector<vector<ll>> g;
    vector<pair<bool, bool>> used1;
    vector<ll> order;
    bool has_cycle = false;
    ordered_topological_sort(vector<Edge<ll>> e, ll n)
    {
        edges = e;
        v = n;
        g.assign(v, vector<ll>());
        dig.assign(v, 0);
        used1.assign(v, {false, false});
        rep(edges.size())
        {
            g[edges[i].from].push_back(edges[i].to);
            dig[edges[i].to]++;
        }
    }
    void setup()
    {
        rep(v)
        {
            if (dig[i] == 0)
            {
                que.push(i);
            }
        }
        while (!que.empty())
        {
            ll top = que.top();
            que.pop();
            for (auto t : g[top])
            {
                dig[t]--;
                if (dig[t] == 0)
                    que.push(t);
            }
            order.push_back(top);
        }
        if (order.size() != v)
            has_cycle = true;
    }

    void dfs(ll s)
    {
        used1[s] = {true, false};
        for (auto t : g[s])
        {
            if (used1[t].first && !used1[t].second)
                has_cycle = true;
            if (!used1[t].first)
                dfs(t);
        }
        used1[s] = {true, true};
        order.push_back(s);
    }
};
