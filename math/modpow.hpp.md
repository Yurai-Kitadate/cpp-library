---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_B.test.cpp
    title: test/aoj/NTL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/modpow.hpp\"\nll modpow(ll a, ll b, ll p)\n{\n    ll\
    \ res = 1;\n    while (b)\n    {\n        if (b & 1)\n            res = (res *\
    \ a) % p;\n        a = (a * a) % p;\n        b /= 2;\n    }\n    return res;\n\
    }\n"
  code: "ll modpow(ll a, ll b, ll p)\n{\n    ll res = 1;\n    while (b)\n    {\n \
    \       if (b & 1)\n            res = (res * a) % p;\n        a = (a * a) % p;\n\
    \        b /= 2;\n    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/modpow.hpp
  requiredBy: []
  timestamp: '2023-04-13 09:35:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_B.test.cpp
documentation_of: math/modpow.hpp
layout: document
title: "modpow(\u6CD5p\u4E0A\u3067\u306E\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5\
  )"
---

## 説明
法p上で繰り返し二乗法をします。

## 計算量
* $O(log n)$

