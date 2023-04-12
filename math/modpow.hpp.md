---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/modpow.test.cpp
    title: test/modpow.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
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
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/modpow.test.cpp
documentation_of: math/modpow.hpp
layout: document
redirect_from:
- /library/math/modpow.hpp
- /library/math/modpow.hpp.html
title: math/modpow.hpp
---
