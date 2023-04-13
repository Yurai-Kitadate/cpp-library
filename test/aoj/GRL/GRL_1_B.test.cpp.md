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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../../emplate/template.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n#include \"../../../emplate/template.hpp\"\n#include \"../../../graph/graph-template/graph-template.hpp\"\
    \n#include \"../../../graph/bellman-ford.hpp\"\nint main()\n{\n    LL(v, e, r);\n\
    \    vector<Edge<ll>> edges;\n    rep(e)\n    {\n        LL(s, t, d);\n      \
    \  Edge<ll> edge{s, t, d};\n\n        edges.push_back(edge);\n    }\n    auto\
    \ bell = bellman_ford(edges, v, r);\n    if (bell.first)\n    {\n        for (auto\
    \ i : bell.second)\n        {\n            if (i >= LINF)\n                out(\"\
    INF\");\n            else\n                out(i);\n        }\n    }\n    else\n\
    \    {\n        out(\"NEGATIVE CYCLE\");\n    }\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: test/aoj/GRL/GRL_1_B.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj/GRL/GRL_1_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/GRL/GRL_1_B.test.cpp
- /verify/test/aoj/GRL/GRL_1_B.test.cpp.html
title: test/aoj/GRL/GRL_1_B.test.cpp
---
