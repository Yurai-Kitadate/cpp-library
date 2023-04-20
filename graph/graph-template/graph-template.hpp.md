---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/bellman-ford.hpp
    title: graph/bellman-ford.hpp
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
  - icon: ':x:'
    path: graph/kruskal.hpp
    title: graph/kruskal.hpp
  - icon: ':warning:'
    path: graph/ordered-topological-sort.hpp
    title: graph/ordered-topological-sort.hpp
  - icon: ':heavy_check_mark:'
    path: graph/scc.hpp
    title: graph/scc.hpp
  - icon: ':heavy_check_mark:'
    path: graph/topological-sort.hpp
    title: graph/topological-sort.hpp
  - icon: ':warning:'
    path: test/atcoder/abc_223_D.cpp
    title: test/atcoder/abc_223_D.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_1_A.test.cpp
    title: test/aoj/GRL/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_1_B.test.cpp
    title: test/aoj/GRL/GRL_1_B.test.cpp
  - icon: ':x:'
    path: test/aoj/GRL/GRL_2_A.test.cpp
    title: test/aoj/GRL/GRL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_3_C.test.cpp
    title: test/aoj/GRL/GRL_3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_4_A.test.cpp
    title: test/aoj/GRL/GRL_4_A.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/graph-template/graph-template.hpp\"\ntemplate <typename\
    \ T>\nstruct Edge\n{\n    ll from;\n    ll to;\n    T cost;\n    bool operator<(const\
    \ Edge &o) const\n    {\n        return cost < o.cost;\n    }\n};\n\nusing Graph\
    \ = vector<vector<Edge<ll>>>;\n"
  code: "#pragma once\ntemplate <typename T>\nstruct Edge\n{\n    ll from;\n    ll\
    \ to;\n    T cost;\n    bool operator<(const Edge &o) const\n    {\n        return\
    \ cost < o.cost;\n    }\n};\n\nusing Graph = vector<vector<Edge<ll>>>;\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/graph-template/graph-template.hpp
  requiredBy:
  - graph/kruskal.hpp
  - graph/topological-sort.hpp
  - graph/scc.hpp
  - graph/dijkstra.hpp
  - graph/ordered-topological-sort.hpp
  - graph/bellman-ford.hpp
  - test/atcoder/abc_223_D.cpp
  timestamp: '2023-04-20 16:58:26+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/aoj/GRL/GRL_1_B.test.cpp
  - test/aoj/GRL/GRL_4_A.test.cpp
  - test/aoj/GRL/GRL_3_C.test.cpp
  - test/aoj/GRL/GRL_1_A.test.cpp
  - test/aoj/GRL/GRL_2_A.test.cpp
documentation_of: graph/graph-template/graph-template.hpp
layout: document
redirect_from:
- /library/graph/graph-template/graph-template.hpp
- /library/graph/graph-template/graph-template.hpp.html
title: graph/graph-template/graph-template.hpp
---
