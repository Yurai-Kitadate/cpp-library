---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_D.test.cpp
    title: test/aoj/NTL_1_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/euler-phi.hpp\"\nll euler_phi(ll n)\n{\n    ll res\
    \ = n;\n    auto factors = factor(n);\n    for (auto i : factors)\n    {\n   \
    \     res = res / (i.first) * (i.first - 1);\n    }\n    return res;\n}\n"
  code: "ll euler_phi(ll n)\n{\n    ll res = n;\n    auto factors = factor(n);\n \
    \   for (auto i : factors)\n    {\n        res = res / (i.first) * (i.first -\
    \ 1);\n    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/euler-phi.hpp
  requiredBy: []
  timestamp: '2023-04-13 10:02:11+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_D.test.cpp
documentation_of: math/euler-phi.hpp
layout: document
redirect_from:
- /library/math/euler-phi.hpp
- /library/math/euler-phi.hpp.html
title: math/euler-phi.hpp
---
