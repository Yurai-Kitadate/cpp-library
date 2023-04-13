---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL/DSL_1_A.test.cpp
    title: test/aoj/DSL/DSL_1_A.test.cpp
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
    \       p[xp] = yp;\n    }\n};\n"
  code: "struct UnionFind\n{\n    vector<ll> p;\n    vector<ll> r;\n    UnionFind(ll\
    \ n)\n    {\n        p.resize(n, -1);\n        r.resize(n, 1);\n    }\n    ll\
    \ find(ll x)\n    {\n        if (p[x] == -1)\n            return x;\n        return\
    \ p[x] = find(p[x]);\n    }\n    void unite(ll x, ll y)\n    {\n        ll xp\
    \ = find(x);\n        ll yp = find(y);\n\n        if (r[xp] > r[yp])\n       \
    \     swap(xp, yp);\n        if (r[xp] == r[yp])\n            r[yp]++;\n     \
    \   if (xp == yp)\n            return;\n        p[xp] = yp;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/union-find.hpp
  requiredBy: []
  timestamp: '2023-04-14 01:09:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL/DSL_1_A.test.cpp
documentation_of: structure/union-find.hpp
layout: document
redirect_from:
- /library/structure/union-find.hpp
- /library/structure/union-find.hpp.html
title: structure/union-find.hpp
---
