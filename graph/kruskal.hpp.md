---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/GRL/GRL_2_A.test.cpp
    title: test/aoj/GRL/GRL_2_A.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/kruskal.hpp\"\nT kruskal(vector<Edge<T>> g, ll n)\n\
    {\n    sort(all(g));\n    UnionFind uf(n);\n    ll cost = 0;\n    rep(g.size())\n\
    \    {\n        auto e = g[i];\n        if (uf.find(e.from) != uf.find(e.to))\n\
    \        {\n            cost += e.cost;\n            uf.unite(e.from, e.to);\n\
    \        }\n    }\n    return cost;\n}\n"
  code: "T kruskal(vector<Edge<T>> g, ll n)\n{\n    sort(all(g));\n    UnionFind uf(n);\n\
    \    ll cost = 0;\n    rep(g.size())\n    {\n        auto e = g[i];\n        if\
    \ (uf.find(e.from) != uf.find(e.to))\n        {\n            cost += e.cost;\n\
    \            uf.unite(e.from, e.to);\n        }\n    }\n    return cost;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/kruskal.hpp
  requiredBy: []
  timestamp: '2023-04-14 02:16:54+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/GRL/GRL_2_A.test.cpp
documentation_of: graph/kruskal.hpp
layout: document
redirect_from:
- /library/graph/kruskal.hpp
- /library/graph/kruskal.hpp.html
title: graph/kruskal.hpp
---
