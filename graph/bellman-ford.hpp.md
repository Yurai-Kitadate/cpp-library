---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_B.test.cpp
    title: test/aoj/GRL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/bellman-ford.hpp\"\ntemplate <typename T>\npair<bool,\
    \ vector<T>> bellman_ford(vector<Edge<T>> g, ll v, ll st)\n{\n    vector<ll> d(v,\
    \ LINF);\n    d[st] = 0;\n    rep(v + 1)\n    {\n        bool update = false;\n\
    \        if (i >= v)\n        {\n            return {false, d};\n        }\n \
    \       for (auto next : g)\n        {\n            if (d[next.from] == LINF)\n\
    \                continue;\n            if (d[next.to] > d[next.from] + next.cost)\n\
    \            {\n                d[next.to] = d[next.from] + next.cost;\n     \
    \           update = true;\n            }\n        }\n        if (!update)\n \
    \           break;\n    }\n    return {true, d};\n}\n"
  code: "template <typename T>\npair<bool, vector<T>> bellman_ford(vector<Edge<T>>\
    \ g, ll v, ll st)\n{\n    vector<ll> d(v, LINF);\n    d[st] = 0;\n    rep(v +\
    \ 1)\n    {\n        bool update = false;\n        if (i >= v)\n        {\n  \
    \          return {false, d};\n        }\n        for (auto next : g)\n      \
    \  {\n            if (d[next.from] == LINF)\n                continue;\n     \
    \       if (d[next.to] > d[next.from] + next.cost)\n            {\n          \
    \      d[next.to] = d[next.from] + next.cost;\n                update = true;\n\
    \            }\n        }\n        if (!update)\n            break;\n    }\n \
    \   return {true, d};\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/bellman-ford.hpp
  requiredBy: []
  timestamp: '2023-04-13 15:06:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_B.test.cpp
documentation_of: graph/bellman-ford.hpp
layout: document
redirect_from:
- /library/graph/bellman-ford.hpp
- /library/graph/bellman-ford.hpp.html
title: graph/bellman-ford.hpp
---