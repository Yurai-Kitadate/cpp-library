---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL/DSL_5_B.test.cpp
    title: test/aoj/DSL/DSL_5_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"dp/cumulative_sum_2d.hpp\"\nvector<vector<ll>> cumulative_sum_2d(vector<vector<ll>>\
    \ a)\n{\n    rep(a.size())\n    {\n        rep(j, a[0].size() - 1)\n        {\n\
    \            a[i][j + 1] += a[i][j];\n        }\n    }\n    rep(a[0].size())\n\
    \    {\n        rep(j, a.size() - 1)\n        {\n            a[j + 1][i] += a[j][i];\n\
    \        }\n    }\n    return a;\n}\n"
  code: "vector<vector<ll>> cumulative_sum_2d(vector<vector<ll>> a)\n{\n    rep(a.size())\n\
    \    {\n        rep(j, a[0].size() - 1)\n        {\n            a[i][j + 1] +=\
    \ a[i][j];\n        }\n    }\n    rep(a[0].size())\n    {\n        rep(j, a.size()\
    \ - 1)\n        {\n            a[j + 1][i] += a[j][i];\n        }\n    }\n   \
    \ return a;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/cumulative_sum_2d.hpp
  requiredBy: []
  timestamp: '2023-04-24 17:03:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL/DSL_5_B.test.cpp
documentation_of: dp/cumulative_sum_2d.hpp
layout: document
redirect_from:
- /library/dp/cumulative_sum_2d.hpp
- /library/dp/cumulative_sum_2d.hpp.html
title: dp/cumulative_sum_2d.hpp
---
