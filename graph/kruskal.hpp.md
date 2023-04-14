---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  - icon: ':heavy_check_mark:'
    path: structure/union-find.hpp
    title: structure/union-find.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_2_A.test.cpp
    title: test/aoj/GRL/GRL_2_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"structure/union-find.hpp\"\nstruct UnionFind\n{\n    vector<ll>\
    \ p;\n    vector<ll> r;\n    UnionFind(ll n)\n    {\n        p.resize(n, -1);\n\
    \        r.resize(n, 1);\n    }\n    ll find(ll x)\n    {\n        if (p[x] ==\
    \ -1)\n            return x;\n        return p[x] = find(p[x]);\n    }\n    void\
    \ unite(ll x, ll y)\n    {\n        ll xp = find(x);\n        ll yp = find(y);\n\
    \n        if (r[xp] > r[yp])\n            swap(xp, yp);\n        if (r[xp] ==\
    \ r[yp])\n            r[yp]++;\n        if (xp == yp)\n            return;\n \
    \       p[xp] = yp;\n    }\n};\n#line 1 \"graph/graph-template/graph-template.hpp\"\
    \ntemplate <typename T>\nstruct Edge\n{\n    ll from;\n    ll to;\n    T cost;\n\
    \    bool operator<(const Edge &o) const\n    {\n        return cost < o.cost;\n\
    \    }\n};\n#line 3 \"graph/kruskal.hpp\"\ntemplate <typename T>\nT kruskal(vector<Edge<T>>\
    \ g, ll n)\n{\n    sort(all(g));\n    UnionFind uf(n);\n    ll cost = 0;\n   \
    \ rep(g.size())\n    {\n        auto e = g[i];\n        if (uf.find(e.from) !=\
    \ uf.find(e.to))\n        {\n            cost += e.cost;\n            uf.unite(e.from,\
    \ e.to);\n        }\n    }\n    return cost;\n}\n"
  code: "#include \"../structure/union-find.hpp\"\n#include \"../graph/graph-template/graph-template.hpp\"\
    \ntemplate <typename T>\nT kruskal(vector<Edge<T>> g, ll n)\n{\n    sort(all(g));\n\
    \    UnionFind uf(n);\n    ll cost = 0;\n    rep(g.size())\n    {\n        auto\
    \ e = g[i];\n        if (uf.find(e.from) != uf.find(e.to))\n        {\n      \
    \      cost += e.cost;\n            uf.unite(e.from, e.to);\n        }\n    }\n\
    \    return cost;\n}\n"
  dependsOn:
  - structure/union-find.hpp
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: graph/kruskal.hpp
  requiredBy: []
  timestamp: '2023-04-14 02:34:18+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL/GRL_2_A.test.cpp
documentation_of: graph/kruskal.hpp
layout: document
redirect_from:
- /library/graph/kruskal.hpp
- /library/graph/kruskal.hpp.html
title: graph/kruskal.hpp
---