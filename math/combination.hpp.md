---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL/DPL_5_A.test.cpp
    title: test/aoj/DPL/DPL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL/DPL_5_E.test.cpp
    title: test/aoj/DPL/DPL_5_E.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/combination.hpp\"\nstruct Combination\n{\n    ll size;\n\
    \    ll mod;\n    ll f = 1;\n    vector<ll> fac = {f};\n    vector<ll> facinv;\n\
    \    Combination(ll size, ll p)\n    {\n        mod = p;\n        rep(i, 1, size\
    \ + 1)\n        {\n            f = f * i % mod;\n            fac.push_back(f);\n\
    \        }\n        f = modpow(f, mod - 2, mod);\n        facinv.push_back(f);\n\
    \        for (ll i = size; i > 0; i--)\n        {\n            // out(i);\n  \
    \          f = f * i % mod;\n            facinv.push_back(f);\n        }\n   \
    \     reverse(all(facinv));\n    }\n    ll c(ll n, ll r)\n    {\n        if (!(0\
    \ <= r && r <= n))\n            return 0;\n        return (((fac[n] * facinv[r])\
    \ % mod) * facinv[n - r]) % mod;\n    }\n};\n"
  code: "struct Combination\n{\n    ll size;\n    ll mod;\n    ll f = 1;\n    vector<ll>\
    \ fac = {f};\n    vector<ll> facinv;\n    Combination(ll size, ll p)\n    {\n\
    \        mod = p;\n        rep(i, 1, size + 1)\n        {\n            f = f *\
    \ i % mod;\n            fac.push_back(f);\n        }\n        f = modpow(f, mod\
    \ - 2, mod);\n        facinv.push_back(f);\n        for (ll i = size; i > 0; i--)\n\
    \        {\n            // out(i);\n            f = f * i % mod;\n           \
    \ facinv.push_back(f);\n        }\n        reverse(all(facinv));\n    }\n    ll\
    \ c(ll n, ll r)\n    {\n        if (!(0 <= r && r <= n))\n            return 0;\n\
    \        return (((fac[n] * facinv[r]) % mod) * facinv[n - r]) % mod;\n    }\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: math/combination.hpp
  requiredBy: []
  timestamp: '2023-04-22 11:00:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DPL/DPL_5_A.test.cpp
  - test/aoj/DPL/DPL_5_E.test.cpp
documentation_of: math/combination.hpp
layout: document
redirect_from:
- /library/math/combination.hpp
- /library/math/combination.hpp.html
title: math/combination.hpp
---