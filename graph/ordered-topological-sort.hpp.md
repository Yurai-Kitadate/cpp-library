---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/atcoder/abc_223_D.cpp
    title: test/atcoder/abc_223_D.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/graph-template/graph-template.hpp\"\nusing Graph =\
    \ vector<vector<Edge<ll>>>;\ntemplate <typename T>\nstruct Edge\n{\n    ll from;\n\
    \    ll to;\n    T cost;\n    bool operator<(const Edge &o) const\n    {\n   \
    \     return cost < o.cost;\n    }\n};\n#line 2 \"graph/ordered-topological-sort.hpp\"\
    \n// https: // atcoder.jp/contests/abc223/tasks/abc223_d\n\nstruct ordered_topological_sort\n\
    {\n    pq<ll> que;\n    vector<Edge<ll>> edges;\n    vector<ll> dig;\n    ll v;\n\
    \    vector<vector<ll>> g;\n    vector<pair<bool, bool>> used1;\n    vector<ll>\
    \ order;\n    bool has_cycle = false;\n    ordered_topological_sort(vector<Edge<ll>>\
    \ e, ll n)\n    {\n        edges = e;\n        v = n;\n        g.assign(v, vector<ll>());\n\
    \        dig.assign(v, 0);\n        used1.assign(v, {false, false});\n       \
    \ rep(edges.size())\n        {\n            g[edges[i].from].push_back(edges[i].to);\n\
    \            dig[edges[i].to]++;\n        }\n    }\n    void setup()\n    {\n\
    \        rep(v)\n        {\n            if (dig[i] == 0)\n            {\n    \
    \            que.push(i);\n            }\n        }\n        while (!que.empty())\n\
    \        {\n            ll top = que.top();\n            que.pop();\n        \
    \    for (auto t : g[top])\n            {\n                dig[t]--;\n       \
    \         if (dig[t] == 0)\n                    que.push(t);\n            }\n\
    \            order.push_back(top);\n        }\n        if (order.size() != v)\n\
    \            has_cycle = true;\n    }\n\n    void dfs(ll s)\n    {\n        used1[s]\
    \ = {true, false};\n        for (auto t : g[s])\n        {\n            if (used1[t].first\
    \ && !used1[t].second)\n                has_cycle = true;\n            if (!used1[t].first)\n\
    \                dfs(t);\n        }\n        used1[s] = {true, true};\n      \
    \  order.push_back(s);\n    }\n};\n"
  code: "#include \"../graph/graph-template/graph-template.hpp\"\n// https: // atcoder.jp/contests/abc223/tasks/abc223_d\n\
    \nstruct ordered_topological_sort\n{\n    pq<ll> que;\n    vector<Edge<ll>> edges;\n\
    \    vector<ll> dig;\n    ll v;\n    vector<vector<ll>> g;\n    vector<pair<bool,\
    \ bool>> used1;\n    vector<ll> order;\n    bool has_cycle = false;\n    ordered_topological_sort(vector<Edge<ll>>\
    \ e, ll n)\n    {\n        edges = e;\n        v = n;\n        g.assign(v, vector<ll>());\n\
    \        dig.assign(v, 0);\n        used1.assign(v, {false, false});\n       \
    \ rep(edges.size())\n        {\n            g[edges[i].from].push_back(edges[i].to);\n\
    \            dig[edges[i].to]++;\n        }\n    }\n    void setup()\n    {\n\
    \        rep(v)\n        {\n            if (dig[i] == 0)\n            {\n    \
    \            que.push(i);\n            }\n        }\n        while (!que.empty())\n\
    \        {\n            ll top = que.top();\n            que.pop();\n        \
    \    for (auto t : g[top])\n            {\n                dig[t]--;\n       \
    \         if (dig[t] == 0)\n                    que.push(t);\n            }\n\
    \            order.push_back(top);\n        }\n        if (order.size() != v)\n\
    \            has_cycle = true;\n    }\n\n    void dfs(ll s)\n    {\n        used1[s]\
    \ = {true, false};\n        for (auto t : g[s])\n        {\n            if (used1[t].first\
    \ && !used1[t].second)\n                has_cycle = true;\n            if (!used1[t].first)\n\
    \                dfs(t);\n        }\n        used1[s] = {true, true};\n      \
    \  order.push_back(s);\n    }\n};\n"
  dependsOn:
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: graph/ordered-topological-sort.hpp
  requiredBy:
  - test/atcoder/abc_223_D.cpp
  timestamp: '2023-04-20 16:51:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/ordered-topological-sort.hpp
layout: document
redirect_from:
- /library/graph/ordered-topological-sort.hpp
- /library/graph/ordered-topological-sort.hpp.html
title: graph/ordered-topological-sort.hpp
---
