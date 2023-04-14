---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/atcoder/abc_293_E.cpp
    title: test/atcoder/abc_293_E.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/matrix.hpp\"\ntemplate <typename T>\nvector<vector<T>>\
    \ mat_mul(vector<vector<T>> a, vector<vector<T>> b, ll m)\n{\n    vector<vector<T>>\
    \ c(a.size(), vector<T>(b[0].size()));\n    rep(i, a.size())\n    {\n        rep(k,\
    \ b.size())\n        {\n            rep(j, b[0].size())\n            {\n     \
    \           c[i][j] = (c[i][j] + (a[i][k] * b[k][j]) % m) % m;\n            }\n\
    \        }\n    }\n    return c;\n}\n\ntemplate <typename T>\nvector<vector<T>>\
    \ mat_pow(vector<vector<T>> a, ll n, ll m)\n{\n    vector<vector<T>> res(a.size(),\
    \ vector<T>(a.size()));\n    rep(a.size())\n    {\n        res[i][i] = 1;\n  \
    \  }\n    while (n)\n    {\n        if (n & 1)\n            res = mat_mul(res,\
    \ a, m);\n        a = mat_mul(a, a, m);\n        n /= 2;\n    }\n    return res;\n\
    }\ntemplate <typename T>\nvector<vector<T>> mat_pow_sum(vector<vector<T>> a, ll\
    \ n, ll m)\n{\n    vector<vector<ll>> mat(2 * a.size(), vector<ll>(2 * a.size()));\n\
    \    rep(a.size())\n    {\n        mat[a.size() + i][a.size() + i] = 1;\n    \
    \    mat[a.size() + i][i] = 1;\n        rep(j, a.size())\n        {\n        \
    \    mat[i][j] = a[i][j];\n        }\n    }\n    auto p = mat_pow(mat, n, m);\n\
    \    vector<vector<ll>> t(2 * a.size(), vector<ll>(a.size()));\n    rep(a.size())\n\
    \    {\n        t[i][i] = 1;\n    }\n    auto q = mat_mul(p, t, m);\n    return\
    \ q;\n}\n"
  code: "template <typename T>\nvector<vector<T>> mat_mul(vector<vector<T>> a, vector<vector<T>>\
    \ b, ll m)\n{\n    vector<vector<T>> c(a.size(), vector<T>(b[0].size()));\n  \
    \  rep(i, a.size())\n    {\n        rep(k, b.size())\n        {\n            rep(j,\
    \ b[0].size())\n            {\n                c[i][j] = (c[i][j] + (a[i][k] *\
    \ b[k][j]) % m) % m;\n            }\n        }\n    }\n    return c;\n}\n\ntemplate\
    \ <typename T>\nvector<vector<T>> mat_pow(vector<vector<T>> a, ll n, ll m)\n{\n\
    \    vector<vector<T>> res(a.size(), vector<T>(a.size()));\n    rep(a.size())\n\
    \    {\n        res[i][i] = 1;\n    }\n    while (n)\n    {\n        if (n & 1)\n\
    \            res = mat_mul(res, a, m);\n        a = mat_mul(a, a, m);\n      \
    \  n /= 2;\n    }\n    return res;\n}\ntemplate <typename T>\nvector<vector<T>>\
    \ mat_pow_sum(vector<vector<T>> a, ll n, ll m)\n{\n    vector<vector<ll>> mat(2\
    \ * a.size(), vector<ll>(2 * a.size()));\n    rep(a.size())\n    {\n        mat[a.size()\
    \ + i][a.size() + i] = 1;\n        mat[a.size() + i][i] = 1;\n        rep(j, a.size())\n\
    \        {\n            mat[i][j] = a[i][j];\n        }\n    }\n    auto p = mat_pow(mat,\
    \ n, m);\n    vector<vector<ll>> t(2 * a.size(), vector<ll>(a.size()));\n    rep(a.size())\n\
    \    {\n        t[i][i] = 1;\n    }\n    auto q = mat_mul(p, t, m);\n    return\
    \ q;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/matrix.hpp
  requiredBy:
  - test/atcoder/abc_293_E.cpp
  timestamp: '2023-04-15 01:12:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/matrix.hpp
layout: document
redirect_from:
- /library/math/matrix.hpp
- /library/math/matrix.hpp.html
title: math/matrix.hpp
---
