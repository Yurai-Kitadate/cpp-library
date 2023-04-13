---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/factor.hpp
    title: "factor(\u7D20\u56E0\u6570\u5206\u89E3)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
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
    \ != 1)\n        factors.push_back({x, 1});\n    return factors;\n}\n#line 2 \"\
    math/euler-phi.hpp\"\nll euler_phi(ll n)\n{\n    ll res = n;\n    auto factors\
    \ = factor(n);\n    for (auto i : factors)\n    {\n        res = res / (i.first)\
    \ * (i.first - 1);\n    }\n    return res;\n}\n"
  code: "#include \"../math/factor.hpp\"\nll euler_phi(ll n)\n{\n    ll res = n;\n\
    \    auto factors = factor(n);\n    for (auto i : factors)\n    {\n        res\
    \ = res / (i.first) * (i.first - 1);\n    }\n    return res;\n}\n"
  dependsOn:
  - math/factor.hpp
  isVerificationFile: false
  path: math/euler-phi.hpp
  requiredBy: []
  timestamp: '2023-04-13 10:07:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL/NTL_1_D.test.cpp
documentation_of: math/euler-phi.hpp
layout: document
redirect_from:
- /library/math/euler-phi.hpp
- /library/math/euler-phi.hpp.html
title: math/euler-phi.hpp
---
