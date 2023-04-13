---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_C.test.cpp
    title: test/aoj/NTL_1_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/lcm.hpp\"\nll lcm(ll a, ll b)\n{\n    return a * b\
    \ / gcd(a, b);\n}\n"
  code: "ll lcm(ll a, ll b)\n{\n    return a * b / gcd(a, b);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/lcm.hpp
  requiredBy: []
  timestamp: '2023-04-13 09:22:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_C.test.cpp
documentation_of: math/lcm.hpp
layout: document
redirect_from:
- /library/math/lcm.hpp
- /library/math/lcm.hpp.html
title: math/lcm.hpp
---
