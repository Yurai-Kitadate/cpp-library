---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/DPL/DPL_5_E.test.cpp
    title: test/aoj/DPL/DPL_5_E.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/combinatorics/combination.hpp\"\nstruct Combination\n\
    {\n    ll size;\n    ll mod;\n    ll f = 1;\n    vector<ll> fac = {f};\n    vector<ll>\
    \ facinv;\n    Combination(ll size, ll p)\n    {\n        mod = p;\n        rep(i,\
    \ 1, size + 1)\n        {\n            f = f * i % mod;\n            fac.push_back(f);\n\
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
  path: math/combinatorics/combination.hpp
  requiredBy: []
  timestamp: '2023-04-13 16:07:56+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/DPL/DPL_5_E.test.cpp
documentation_of: math/combinatorics/combination.hpp
layout: document
redirect_from:
- /library/math/combinatorics/combination.hpp
- /library/math/combinatorics/combination.hpp.html
title: math/combinatorics/combination.hpp
---
