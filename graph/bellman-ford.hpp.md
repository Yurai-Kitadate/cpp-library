---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_1_B.test.cpp
    title: test/aoj/GRL/GRL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/graph-template/graph-template.hpp\"\ntemplate <typename\
    \ T>\nstruct Edge\n{\n    ll from;\n    ll to;\n    T cost;\n};\n#line 2 \"graph/bellman-ford.hpp\"\
    \n\ntemplate <typename T>\npair<bool, vector<T>> bellman_ford(vector<Edge<T>>\
    \ g, ll v, ll st)\n{\n    vector<ll> d(v, LINF);\n    d[st] = 0;\n    rep(v +\
    \ 1)\n    {\n        bool update = false;\n        if (i >= v)\n        {\n  \
    \          return {false, d};\n        }\n        for (auto next : g)\n      \
    \  {\n            if (d[next.from] == LINF)\n                continue;\n     \
    \       if (d[next.to] > d[next.from] + next.cost)\n            {\n          \
    \      d[next.to] = d[next.from] + next.cost;\n                update = true;\n\
    \            }\n        }\n        if (!update)\n            break;\n    }\n \
    \   return {true, d};\n}\n"
  code: "#include \"../graph/graph-template/graph-template.hpp\"\n\ntemplate <typename\
    \ T>\npair<bool, vector<T>> bellman_ford(vector<Edge<T>> g, ll v, ll st)\n{\n\
    \    vector<ll> d(v, LINF);\n    d[st] = 0;\n    rep(v + 1)\n    {\n        bool\
    \ update = false;\n        if (i >= v)\n        {\n            return {false,\
    \ d};\n        }\n        for (auto next : g)\n        {\n            if (d[next.from]\
    \ == LINF)\n                continue;\n            if (d[next.to] > d[next.from]\
    \ + next.cost)\n            {\n                d[next.to] = d[next.from] + next.cost;\n\
    \                update = true;\n            }\n        }\n        if (!update)\n\
    \            break;\n    }\n    return {true, d};\n}\n"
  dependsOn:
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: graph/bellman-ford.hpp
  requiredBy: []
  timestamp: '2023-04-13 16:29:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL/GRL_1_B.test.cpp
documentation_of: graph/bellman-ford.hpp
layout: document
redirect_from:
- /library/graph/bellman-ford.hpp
- /library/graph/bellman-ford.hpp.html
title: graph/bellman-ford.hpp
---
