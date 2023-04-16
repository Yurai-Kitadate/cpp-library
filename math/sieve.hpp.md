---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/other/sieve.test.cpp
    title: test/aoj/other/sieve.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/sieve.hpp\"\nvector<bool> get_tf_sieve(ll n)\n{\n \
    \   vector<bool> is_prime(n + 1, true);\n    is_prime[0] = false;\n    is_prime[1]\
    \ = false;\n    rep(i, 2, n + 1)\n    {\n        if (is_prime[i])\n        {\n\
    \            for (ll j = 2 * i; j <= n; j += i)\n            {\n             \
    \   is_prime[j] = false;\n            }\n        }\n    }\n    return is_prime;\n\
    }\n\nvector<ll> get_prime_table(ll n)\n{\n    auto table = get_tf_sieve(n);\n\
    \    vector<ll> primes;\n    rep(n)\n    {\n        if (table[i])\n        {\n\
    \            primes.push_back(i);\n        }\n    }\n    return primes;\n}\n"
  code: "vector<bool> get_tf_sieve(ll n)\n{\n    vector<bool> is_prime(n + 1, true);\n\
    \    is_prime[0] = false;\n    is_prime[1] = false;\n    rep(i, 2, n + 1)\n  \
    \  {\n        if (is_prime[i])\n        {\n            for (ll j = 2 * i; j <=\
    \ n; j += i)\n            {\n                is_prime[j] = false;\n          \
    \  }\n        }\n    }\n    return is_prime;\n}\n\nvector<ll> get_prime_table(ll\
    \ n)\n{\n    auto table = get_tf_sieve(n);\n    vector<ll> primes;\n    rep(n)\n\
    \    {\n        if (table[i])\n        {\n            primes.push_back(i);\n \
    \       }\n    }\n    return primes;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/sieve.hpp
  requiredBy: []
  timestamp: '2023-04-16 21:00:28+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/other/sieve.test.cpp
documentation_of: math/sieve.hpp
layout: document
title: "\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9"
---

## 説明
エラトステネスの篩を生成します。
素数かどうかT/Fで持つものと素数だけを持つものがあります。

## 計算量
* $O(n\,log\,log\,n)$

