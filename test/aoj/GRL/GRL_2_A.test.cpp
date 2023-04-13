#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A"
#include "../../../template/template.hpp"
#include "../../../graph/kruskal.hpp"
int main()
{
    LL(v, e);
    vector<Edge<ll>> edges;
    rep(e)
    {
        LL(s, t, w);
        Edge<ll> edge{s, t, w};
        edges.push_back(edge);
    }
    out(kruskal(edges, v));
}
