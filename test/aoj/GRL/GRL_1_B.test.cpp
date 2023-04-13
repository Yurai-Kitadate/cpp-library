#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B"
#include "../../../template/template.hpp"
#include "../../../graph/bellman-ford.hpp"
int main()
{
    LL(v, e, r);
    vector<Edge<ll>> edges;
    rep(e)
    {
        LL(s, t, d);
        Edge<ll> edge{s, t, d};

        edges.push_back(edge);
    }
    auto bell = bellman_ford(edges, v, r);
    if (bell.first)
    {
        for (auto i : bell.second)
        {
            if (i >= LINF)
                out("INF");
            else
                out(i);
        }
    }
    else
    {
        out("NEGATIVE CYCLE");
    }
}
