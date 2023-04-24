---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/GRL_4_A.test.cpp
    title: test/aoj/GRL/GRL_4_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/graph-template/graph-template.hpp\"\nstruct Edge\n\
    {\n    ll from;\n    ll to;\n    ll cost;\n    bool operator<(const Edge &o) const\n\
    \    {\n        return cost < o.cost;\n    }\n};\n\nusing Graph = vector<vector<Edge>>;\n\
    #line 2 \"graph/topological-sort.hpp\"\nstruct topological_sort\n{\n    vector<Edge>\
    \ edges;\n    ll v;\n    vector<vector<ll>> g;\n    vector<pair<bool, bool>> used1;\n\
    \    vector<ll> order;\n    bool has_cycle = false;\n    topological_sort(vector<Edge>\
    \ e, ll n)\n    {\n        edges = e;\n        v = n;\n        g.assign(v, vector<ll>());\n\
    \        used1.assign(v, {false, false});\n        rep(edges.size())\n       \
    \ {\n            g[edges[i].from].push_back(edges[i].to);\n        }\n       \
    \ rep(v)\n        {\n            sort(all(g[i]));\n        }\n    }\n\n    void\
    \ dfs(ll s)\n    {\n        used1[s] = {true, false};\n        for (auto t : g[s])\n\
    \        {\n            if (used1[t].first && !used1[t].second)\n            \
    \    has_cycle = true;\n            if (!used1[t].first)\n                dfs(t);\n\
    \        }\n        used1[s] = {true, true};\n        order.push_back(s);\n  \
    \  }\n\n    void setup()\n    {\n        rep(v)\n        {\n            if (!used1[i].first)\n\
    \                dfs(i);\n        }\n        reverse(all(order));\n    }\n};\n"
  code: "#include \"../graph/graph-template/graph-template.hpp\"\nstruct topological_sort\n\
    {\n    vector<Edge> edges;\n    ll v;\n    vector<vector<ll>> g;\n    vector<pair<bool,\
    \ bool>> used1;\n    vector<ll> order;\n    bool has_cycle = false;\n    topological_sort(vector<Edge>\
    \ e, ll n)\n    {\n        edges = e;\n        v = n;\n        g.assign(v, vector<ll>());\n\
    \        used1.assign(v, {false, false});\n        rep(edges.size())\n       \
    \ {\n            g[edges[i].from].push_back(edges[i].to);\n        }\n       \
    \ rep(v)\n        {\n            sort(all(g[i]));\n        }\n    }\n\n    void\
    \ dfs(ll s)\n    {\n        used1[s] = {true, false};\n        for (auto t : g[s])\n\
    \        {\n            if (used1[t].first && !used1[t].second)\n            \
    \    has_cycle = true;\n            if (!used1[t].first)\n                dfs(t);\n\
    \        }\n        used1[s] = {true, true};\n        order.push_back(s);\n  \
    \  }\n\n    void setup()\n    {\n        rep(v)\n        {\n            if (!used1[i].first)\n\
    \                dfs(i);\n        }\n        reverse(all(order));\n    }\n};\n"
  dependsOn:
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: graph/topological-sort.hpp
  requiredBy: []
  timestamp: '2023-04-20 17:13:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL/GRL_4_A.test.cpp
documentation_of: graph/topological-sort.hpp
layout: document
redirect_from:
- /library/graph/topological-sort.hpp
- /library/graph/topological-sort.hpp.html
title: graph/topological-sort.hpp
---