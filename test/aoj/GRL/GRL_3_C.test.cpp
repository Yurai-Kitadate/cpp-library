#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_3_C"
#include "../../../template/template.hpp"
#include "../../../graph/scc.hpp"
int main()
{
    LL(v, e);
    vector<Edge> edges;
    rep(e)
    {
        LL(s, t);
        edges.push_back(Edge{s, t, 1});
    }
    auto s = scc(edges, v);
    s.setup();
    auto group = s.group;
    LL(q);
    rep(q)
    {
        LL(u, v);
        if (group[u] == group[v])
            out(1);
        else
            out(0);
    }
}
