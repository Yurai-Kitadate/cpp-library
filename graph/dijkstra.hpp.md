---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/dijkstra.hpp\"\ntemplate <typename T>\nvector<T> dijkstra(vector<vector<Graph<T>>>\
    \ g, ll s, ll v)\n{\n    vector<ll> before(v, -1);\n    vector<T> dist(v, LINF);\n\
    \    vector<bool> seen(v, false);\n    dist[s] = 0;\n    priority_queue<pair<ll,\
    \ T>, vector<pair<ll, T>>, greater<pair<ll, T>>> q;\n    q.push(pair(0, s));\n\
    \    while (!q.empty())\n    {\n        auto top = q.top().second;\n        q.pop();\n\
    \        seen[top] = true;\n        for (Graph<ll> next : g[top])\n        {\n\
    \            if (!seen[next.to] && dist[top] + next.cost < dist[next.to])\n  \
    \          {\n                before[next.to] = top;\n                dist[next.to]\
    \ = dist[top] + next.cost;\n                q.push(pair(dist[next.to], next.to));\n\
    \            }\n        }\n    }\n    return dist;\n}\n"
  code: "template <typename T>\nvector<T> dijkstra(vector<vector<Graph<T>>> g, ll\
    \ s, ll v)\n{\n    vector<ll> before(v, -1);\n    vector<T> dist(v, LINF);\n \
    \   vector<bool> seen(v, false);\n    dist[s] = 0;\n    priority_queue<pair<ll,\
    \ T>, vector<pair<ll, T>>, greater<pair<ll, T>>> q;\n    q.push(pair(0, s));\n\
    \    while (!q.empty())\n    {\n        auto top = q.top().second;\n        q.pop();\n\
    \        seen[top] = true;\n        for (Graph<ll> next : g[top])\n        {\n\
    \            if (!seen[next.to] && dist[top] + next.cost < dist[next.to])\n  \
    \          {\n                before[next.to] = top;\n                dist[next.to]\
    \ = dist[top] + next.cost;\n                q.push(pair(dist[next.to], next.to));\n\
    \            }\n        }\n    }\n    return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2023-04-13 13:29:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_A.test.cpp
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: graph/dijkstra.hpp
---
