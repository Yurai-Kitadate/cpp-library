#include "../graph/graph-template/graph-template.hpp"

template <typename T>
pair<bool, vector<T>> bellman_ford(vector<Edge<T>> g, ll v, ll st)
{
    vector<ll> d(v, LINF);
    d[st] = 0;
    rep(v + 1)
    {
        bool update = false;
        if (i >= v)
        {
            return {false, d};
        }
        for (auto next : g)
        {
            if (d[next.from] == LINF)
                continue;
            if (d[next.to] > d[next.from] + next.cost)
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
