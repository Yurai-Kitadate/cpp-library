#include "../graph/graph-template/graph-template.hpp"

vector<ll> dijkstra(Graph g, ll s, ll v)
{
    vector<ll> before(v, -1);
    vector<ll> dist(v, LINF);
    vector<bool> seen(v, false);
    dist[s] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push(pair(0, s));
    while (!q.empty())
    {
        auto top = q.top().second;
        q.pop();
        seen[top] = true;
        for (Edge next : g[top])
        {
            if (!seen[next.to] && dist[top] + next.cost < dist[next.to])
            {
                before[next.to] = top;
                dist[next.to] = dist[top] + next.cost;
                q.push(pair(dist[next.to], next.to));
            }
        }
    }
    return dist;
}
