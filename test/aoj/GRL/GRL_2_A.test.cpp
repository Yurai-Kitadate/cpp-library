#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A"
#include "../../../template/template.hpp"
#include "../../../structure/union-find.hpp"
#include "../../../graph/graph-template/graph-template.hpp"
#include "../../../graph/kruskal.hpp"
template <typename T>
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
