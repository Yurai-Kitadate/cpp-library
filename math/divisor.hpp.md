---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ITP/ITP_1_3_D.test.cpp
    title: test/aoj/ITP/ITP_1_3_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/divisor.hpp\"\nvll divisor(ll x)\n{\n\n    vll lower_divisors,\
    \ upper_divisors;\n    for (ll i = 1; i * i <= x; i++)\n    {\n        if (x %\
    \ i == 0)\n        {\n            lower_divisors.push_back(i);\n            if\
    \ (i != x / i)\n                upper_divisors.push_back(x / i);\n        }\n\
    \    }\n    reverse(all(upper_divisors));\n    for (auto divisor : upper_divisors)\n\
    \        lower_divisors.push_back(divisor);\n    return lower_divisors;\n}\n"
  code: "vll divisor(ll x)\n{\n\n    vll lower_divisors, upper_divisors;\n    for\
    \ (ll i = 1; i * i <= x; i++)\n    {\n        if (x % i == 0)\n        {\n   \
    \         lower_divisors.push_back(i);\n            if (i != x / i)\n        \
    \        upper_divisors.push_back(x / i);\n        }\n    }\n    reverse(all(upper_divisors));\n\
    \    for (auto divisor : upper_divisors)\n        lower_divisors.push_back(divisor);\n\
    \    return lower_divisors;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/divisor.hpp
  requiredBy: []
  timestamp: '2023-04-13 10:39:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ITP/ITP_1_3_D.test.cpp
documentation_of: math/divisor.hpp
layout: document
redirect_from:
- /library/math/divisor.hpp
- /library/math/divisor.hpp.html
title: math/divisor.hpp
---
