---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/modpow.hpp\"\nll modpow(ll a, ll b, ll p)\n{\n    ll\
    \ ans = 1;\n    while (b)\n    {\n        if (b & 1)\n            (ans *= a) %=\
    \ p;\n        (a *= a) %= p;\n        b /= 2;\n    }\n    return ans;\n}\n"
  code: "ll modpow(ll a, ll b, ll p)\n{\n    ll ans = 1;\n    while (b)\n    {\n \
    \       if (b & 1)\n            (ans *= a) %= p;\n        (a *= a) %= p;\n   \
    \     b /= 2;\n    }\n    return ans;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/modpow.hpp
  requiredBy: []
  timestamp: '2023-04-13 02:52:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/modpow.hpp
layout: document
title: "modpow(\u6CD5p\u4E0A\u3067\u306E\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5\
  )"
---

## 説明
法p上で繰り返し二乗法をします。

## 計算量
* $O(log n)$

