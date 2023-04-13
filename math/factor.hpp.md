---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_A.test.cpp
    title: test/aoj/NTL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/factor.hpp\"\nvector<pll> factor(ll x)\n{\n    vector<pll>\
    \ factors;\n    for (ll i = 2; i * i <= x; i++)\n        if (x % i == 0)\n   \
    \     {\n            factors.push_back({i, 1});\n            x /= i;\n       \
    \     while (x % i == 0)\n            {\n                factors[factors.size()\
    \ - 1].second += 1;\n                x /= i;\n            }\n        }\n    if\
    \ (x != 1)\n        factors.push_back({x, 1});\n    return factors;\n}\n"
  code: "vector<pll> factor(ll x)\n{\n    vector<pll> factors;\n    for (ll i = 2;\
    \ i * i <= x; i++)\n        if (x % i == 0)\n        {\n            factors.push_back({i,\
    \ 1});\n            x /= i;\n            while (x % i == 0)\n            {\n \
    \               factors[factors.size() - 1].second += 1;\n                x /=\
    \ i;\n            }\n        }\n    if (x != 1)\n        factors.push_back({x,\
    \ 1});\n    return factors;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/factor.hpp
  requiredBy: []
  timestamp: '2023-04-13 09:26:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_A.test.cpp
documentation_of: math/factor.hpp
layout: document
title: "factor(\u7D20\u56E0\u6570\u5206\u89E3)"
---

## 説明
正整数$n$を素因数分解をして(素因数の種類,その素因数の数)のpair配列を返します。

## 計算量
* $O(\sqrt n)$

