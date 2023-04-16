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
  bundledCode: "#line 1 \"other/compress.hpp\"\nmap<ll, ll> shrink(vector<ll> a)\n\
    {\n    set<ll> s(all(a));\n    map<ll, ll> t;\n    auto ite = s.begin();\n   \
    \ rep(s.size())\n    {\n        t[*ite] = i;\n        ite++;\n    }\n    return\
    \ t;\n}\n"
  code: "map<ll, ll> shrink(vector<ll> a)\n{\n    set<ll> s(all(a));\n    map<ll,\
    \ ll> t;\n    auto ite = s.begin();\n    rep(s.size())\n    {\n        t[*ite]\
    \ = i;\n        ite++;\n    }\n    return t;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/compress.hpp
  requiredBy: []
  timestamp: '2023-04-16 16:13:51+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/compress.hpp
layout: document
redirect_from:
- /library/other/compress.hpp
- /library/other/compress.hpp.html
title: other/compress.hpp
---
