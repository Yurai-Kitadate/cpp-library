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
  bundledCode: "#line 1 \"math/factor.hpp\"\nvector<pll> factor(ull x)\n{\n    vector<pll>\
    \ ans;\n    for (ull i = 2; i * i <= x; i++)\n        if (x % i == 0)\n      \
    \  {\n            ans.push_back({i, 1});\n            while ((x /= i) % i == 0)\n\
    \                ans.back().second++;\n        }\n    if (x != 1)\n        ans.push_back({x,\
    \ 1});\n    return ans;\n}\n"
  code: "vector<pll> factor(ull x)\n{\n    vector<pll> ans;\n    for (ull i = 2; i\
    \ * i <= x; i++)\n        if (x % i == 0)\n        {\n            ans.push_back({i,\
    \ 1});\n            while ((x /= i) % i == 0)\n                ans.back().second++;\n\
    \        }\n    if (x != 1)\n        ans.push_back({x, 1});\n    return ans;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: math/factor.hpp
  requiredBy: []
  timestamp: '2023-04-13 08:51:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_A.test.cpp
documentation_of: math/factor.hpp
layout: document
redirect_from:
- /library/math/factor.hpp
- /library/math/factor.hpp.html
title: math/factor.hpp
---
