---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/kruskal.hpp
    title: graph/kruskal.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL/DSL_1_A.test.cpp
    title: test/aoj/DSL/DSL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_2_A.test.cpp
    title: test/aoj/GRL/GRL_2_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"structure/union-find.hpp\"\nstruct UnionFind\n{\n    vector<ll>\
    \ p;\n    UnionFind(size_t sz) : p(sz, -1) {}\n    ll find(ll x)\n    {\n    \
    \    if (p[x] < 0)\n            return x;\n        return p[x] = find(p[x]);\n\
    \    }\n    void unite(ll x, ll y)\n    {\n        ll xp = find(x);\n        ll\
    \ yp = find(y);\n        if (xp == yp)\n            return;\n        if (p[xp]\
    \ > p[yp])\n            swap(x, y);\n        p[xp] += p[yp];\n        p[yp] =\
    \ xp;\n    }\n    ll size(ll x)\n    {\n        return -p[find(x)];\n    }\n};\n"
  code: "struct UnionFind\n{\n    vector<ll> p;\n    UnionFind(size_t sz) : p(sz,\
    \ -1) {}\n    ll find(ll x)\n    {\n        if (p[x] < 0)\n            return\
    \ x;\n        return p[x] = find(p[x]);\n    }\n    void unite(ll x, ll y)\n \
    \   {\n        ll xp = find(x);\n        ll yp = find(y);\n        if (xp == yp)\n\
    \            return;\n        if (p[xp] > p[yp])\n            swap(x, y);\n  \
    \      p[xp] += p[yp];\n        p[yp] = xp;\n    }\n    ll size(ll x)\n    {\n\
    \        return -p[find(x)];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/union-find.hpp
  requiredBy:
  - graph/kruskal.hpp
  timestamp: '2023-04-20 16:51:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL/GRL_2_A.test.cpp
  - test/aoj/DSL/DSL_1_A.test.cpp
documentation_of: structure/union-find.hpp
layout: document
redirect_from:
- /library/structure/union-find.hpp
- /library/structure/union-find.hpp.html
title: structure/union-find.hpp
---
