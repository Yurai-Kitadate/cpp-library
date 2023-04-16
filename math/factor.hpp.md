---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/euler-phi.hpp
    title: math/euler-phi.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL/NTL_1_A.test.cpp
    title: test/aoj/NTL/NTL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL/NTL_1_D.test.cpp
    title: test/aoj/NTL/NTL_1_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/factor.hpp\"\nvector<pll> factor(ll x)\n{\n    vector<pll>\
    \ factors;\n    for (ll i = 2; i * i <= x; i++)\n        if (x % i == 0)\n   \
    \     {\n            factors.push_back({i, 1});\n            x /= i;\n       \
    \     while (x % i == 0)\n            {\n                factors[factors.size()\
    \ - 1].second++;\n                x /= i;\n            }\n        }\n    if (x\
    \ != 1)\n        factors.push_back({x, 1});\n    return factors;\n}\n"
  code: "vector<pll> factor(ll x)\n{\n    vector<pll> factors;\n    for (ll i = 2;\
    \ i * i <= x; i++)\n        if (x % i == 0)\n        {\n            factors.push_back({i,\
    \ 1});\n            x /= i;\n            while (x % i == 0)\n            {\n \
    \               factors[factors.size() - 1].second++;\n                x /= i;\n\
    \            }\n        }\n    if (x != 1)\n        factors.push_back({x, 1});\n\
    \    return factors;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/factor.hpp
  requiredBy:
  - math/euler-phi.hpp
  timestamp: '2023-04-13 09:33:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL/NTL_1_D.test.cpp
  - test/aoj/NTL/NTL_1_A.test.cpp
documentation_of: math/factor.hpp
layout: document
title: "\u5EA7\u6A19\u5727\u7E2E"
---

## 説明
(key : a[i],value : a[i]の圧縮後の座標)の連想配列を返します。

## 計算量

* $O(nlog\,n)$(nはaのサイズ)

