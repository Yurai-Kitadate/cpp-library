---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../library/template/template.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A\"\n#include\
    \ \"../../library/template/template.hpp\"\n#include \"../../library/graph/graph-template/graph-template.hpp\"\
    \n#include \"../../library/graph/dijkstra.hpp\"\nint main()\n{\n    LL(v, e, r);\n\
    \    vector<vector<Graph<ll>>> g(v);\n    rep(e)\n    {\n        LL(s, t, d);\n\
    \        Graph<ll> m;\n        m.to = t;\n        m.cost = d;\n        g[s].emplace_back(m);\n\
    \    }\n    auto shortest = dijkstra(g, r, v);\n    for (auto i : shortest)\n\
    \    {\n        if (i >= LINF)\n            out(\"INF\");\n        else\n    \
    \        out(i);\n    }\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: test/aoj/GRL_1_A.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj/GRL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/GRL_1_A.test.cpp
- /verify/test/aoj/GRL_1_A.test.cpp.html
title: test/aoj/GRL_1_A.test.cpp
---
