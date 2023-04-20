---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/GRL/GRL_1_A.test.cpp
    title: test/aoj/GRL/GRL_1_A.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/graph-template/graph-template.hpp\"\nusing Graph =\
    \ vector<vector<Edge<ll>>>;\ntemplate <typename T>\nstruct Edge\n{\n    ll from;\n\
    \    ll to;\n    T cost;\n    bool operator<(const Edge &o) const\n    {\n   \
    \     return cost < o.cost;\n    }\n};\n#line 2 \"graph/dijkstra.hpp\"\n\ntemplate\
    \ <typename T>\nvector<T> dijkstra(Graph g, ll s, ll v)\n{\n    vector<ll> before(v,\
    \ -1);\n    vector<T> dist(v, LINF);\n    vector<bool> seen(v, false);\n    dist[s]\
    \ = 0;\n    priority_queue<pair<ll, T>, vector<pair<ll, T>>, greater<pair<ll,\
    \ T>>> q;\n    q.push(pair(0, s));\n    while (!q.empty())\n    {\n        auto\
    \ top = q.top().second;\n        q.pop();\n        seen[top] = true;\n       \
    \ for (Edge<ll> next : g[top])\n        {\n            if (!seen[next.to] && dist[top]\
    \ + next.cost < dist[next.to])\n            {\n                before[next.to]\
    \ = top;\n                dist[next.to] = dist[top] + next.cost;\n           \
    \     q.push(pair(dist[next.to], next.to));\n            }\n        }\n    }\n\
    \    return dist;\n}\n"
  code: "#include \"../graph/graph-template/graph-template.hpp\"\n\ntemplate <typename\
    \ T>\nvector<T> dijkstra(Graph g, ll s, ll v)\n{\n    vector<ll> before(v, -1);\n\
    \    vector<T> dist(v, LINF);\n    vector<bool> seen(v, false);\n    dist[s] =\
    \ 0;\n    priority_queue<pair<ll, T>, vector<pair<ll, T>>, greater<pair<ll, T>>>\
    \ q;\n    q.push(pair(0, s));\n    while (!q.empty())\n    {\n        auto top\
    \ = q.top().second;\n        q.pop();\n        seen[top] = true;\n        for\
    \ (Edge<ll> next : g[top])\n        {\n            if (!seen[next.to] && dist[top]\
    \ + next.cost < dist[next.to])\n            {\n                before[next.to]\
    \ = top;\n                dist[next.to] = dist[top] + next.cost;\n           \
    \     q.push(pair(dist[next.to], next.to));\n            }\n        }\n    }\n\
    \    return dist;\n}\n"
  dependsOn:
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2023-04-20 16:51:17+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/GRL/GRL_1_A.test.cpp
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: graph/dijkstra.hpp
---
