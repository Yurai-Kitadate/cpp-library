#define PROBLEM "https://atcoder.jp/contests/abc223/tasks/abc223_d"
#include "../../template/template.hpp"
#include "../../graph/ordered-topological-sort.hpp"

int main()
{
    LL(n, m);
    vector<Edge<ll>> g;
    rep(m)
    {
        LL(a, b);
        a--;
        b--;
        g.push_back(Edge<ll>{a, b, 1});
    }
    auto s = ordered_topological_sort(g, n);
    s.setup();
    if (s.has_cycle)
    {
        out(-1);
    }
    else
    {
        rep(n)
        {
            s.order[i]++;
        }
        out(s.order);
    }
}
