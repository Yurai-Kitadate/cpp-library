template <typename T>
vector<T> dijkstra(vector<vector<Edge<T>>> g, ll s, ll v)
{
    vector<ll> before(v, -1);
    vector<T> dist(v, LINF);
    vector<bool> seen(v, false);
    dist[s] = 0;
    priority_queue<pair<ll, T>, vector<pair<ll, T>>, greater<pair<ll, T>>> q;
    q.push(pair(0, s));
    while (!q.empty())
    {
        auto top = q.top().second;
        q.pop();
        seen[top] = true;
        for (Edge<ll> next : g[top])
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
