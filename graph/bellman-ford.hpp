template <typename T>
pair<bool, vector<T>> bellman_ford(vector<Edge<T>> g, ll st)
{
    vector<ll> d(g.size(), LINF);
    d[st] = 0;
    rep(g.size() + 1)
    {
        bool update = false;
        if (i >= g.size())
        {
            return {false, d};
        }
        for (auto next : g)
        {
            if (next.from < LINF && d[next.to] > d[next.from] + next.cost)
            {
                d[next.to] = d[next.from] + next.cost;
                update = true;
            }
        }
        if (!update)
            break;
    }
    return {true, d};
}
