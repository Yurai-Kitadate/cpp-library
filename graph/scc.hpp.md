---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/GRL/GRL_3_C.test.cpp
    title: test/aoj/GRL/GRL_3_C.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/graph-template/graph-template.hpp\"\nusing Graph =\
    \ vector<vector<Edge<ll>>>;\ntemplate <typename T>\nstruct Edge\n{\n    ll from;\n\
    \    ll to;\n    T cost;\n    bool operator<(const Edge &o) const\n    {\n   \
    \     return cost < o.cost;\n    }\n};\n#line 2 \"graph/scc.hpp\"\nstruct scc\n\
    {\n    vector<Edge<ll>> edges;\n    ll v;\n    vector<vector<ll>> g;\n    vector<vector<ll>>\
    \ gr;\n    vector<bool> used1;\n    vector<bool> used2;\n    vector<ll> group;\n\
    \    vector<ll> order;\n\n    scc(vector<Edge<ll>> e, ll n)\n    {\n        edges\
    \ = e;\n        v = n;\n        g.assign(v, vector<ll>());\n        gr.assign(v,\
    \ vector<ll>());\n        used1.assign(v, false);\n        used2.assign(v, false);\n\
    \        group.assign(v, -1);\n        rep(edges.size())\n        {\n        \
    \    g[edges[i].from].push_back(edges[i].to);\n            gr[edges[i].to].push_back(edges[i].from);\n\
    \        }\n    }\n\n    void dfs(ll s)\n    {\n        used1[s] = true;\n   \
    \     for (auto t : g[s])\n        {\n            if (!used1[t])\n           \
    \     dfs(t);\n        }\n        order.push_back(s);\n    }\n    void rdfs(ll\
    \ s, ll id)\n    {\n        group[s] = id;\n        used2[s] = true;\n       \
    \ for (auto t : gr[s])\n        {\n            if (!used2[t])\n              \
    \  rdfs(t, id);\n        }\n    }\n\n    void setup()\n    {\n        rep(v)\n\
    \        {\n            if (!used1[i])\n                dfs(i);\n        }\n \
    \       ll label = 0;\n        reverse(all(order));\n        for (auto t : order)\n\
    \        {\n            if (!used2[t])\n            {\n                rdfs(t,\
    \ label);\n                label++;\n            }\n        }\n    }\n};\n"
  code: "#include \"../graph/graph-template/graph-template.hpp\"\nstruct scc\n{\n\
    \    vector<Edge<ll>> edges;\n    ll v;\n    vector<vector<ll>> g;\n    vector<vector<ll>>\
    \ gr;\n    vector<bool> used1;\n    vector<bool> used2;\n    vector<ll> group;\n\
    \    vector<ll> order;\n\n    scc(vector<Edge<ll>> e, ll n)\n    {\n        edges\
    \ = e;\n        v = n;\n        g.assign(v, vector<ll>());\n        gr.assign(v,\
    \ vector<ll>());\n        used1.assign(v, false);\n        used2.assign(v, false);\n\
    \        group.assign(v, -1);\n        rep(edges.size())\n        {\n        \
    \    g[edges[i].from].push_back(edges[i].to);\n            gr[edges[i].to].push_back(edges[i].from);\n\
    \        }\n    }\n\n    void dfs(ll s)\n    {\n        used1[s] = true;\n   \
    \     for (auto t : g[s])\n        {\n            if (!used1[t])\n           \
    \     dfs(t);\n        }\n        order.push_back(s);\n    }\n    void rdfs(ll\
    \ s, ll id)\n    {\n        group[s] = id;\n        used2[s] = true;\n       \
    \ for (auto t : gr[s])\n        {\n            if (!used2[t])\n              \
    \  rdfs(t, id);\n        }\n    }\n\n    void setup()\n    {\n        rep(v)\n\
    \        {\n            if (!used1[i])\n                dfs(i);\n        }\n \
    \       ll label = 0;\n        reverse(all(order));\n        for (auto t : order)\n\
    \        {\n            if (!used2[t])\n            {\n                rdfs(t,\
    \ label);\n                label++;\n            }\n        }\n    }\n};\n"
  dependsOn:
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: graph/scc.hpp
  requiredBy: []
  timestamp: '2023-04-20 16:51:17+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/GRL/GRL_3_C.test.cpp
documentation_of: graph/scc.hpp
layout: document
redirect_from:
- /library/graph/scc.hpp
- /library/graph/scc.hpp.html
title: graph/scc.hpp
---
