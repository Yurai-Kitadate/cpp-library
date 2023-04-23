---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ALDS/ALDS_1_10_C.test.cpp
    title: test/aoj/ALDS/ALDS_1_10_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"dp/lcs.hpp\"\nll lcs(string s, string t)\n{\n    vv(ll,\
    \ dp, s.length() + 1, t.length() + 1);\n    rep(i, 1, s.length() + 1)\n    {\n\
    \        rep(j, 1, t.length() + 1)\n        {\n            if (s[i - 1] == t[j\
    \ - 1])\n            {\n                dp[i][j] = dp[i - 1][j - 1] + 1;\n   \
    \         }\n            else\n            {\n                dp[i][j] = max(dp[i][j\
    \ - 1], dp[i - 1][j]);\n            }\n        }\n    }\n    return dp[s.length()][t.length()];\n\
    }\n"
  code: "ll lcs(string s, string t)\n{\n    vv(ll, dp, s.length() + 1, t.length()\
    \ + 1);\n    rep(i, 1, s.length() + 1)\n    {\n        rep(j, 1, t.length() +\
    \ 1)\n        {\n            if (s[i - 1] == t[j - 1])\n            {\n      \
    \          dp[i][j] = dp[i - 1][j - 1] + 1;\n            }\n            else\n\
    \            {\n                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);\n\
    \            }\n        }\n    }\n    return dp[s.length()][t.length()];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/lcs.hpp
  requiredBy: []
  timestamp: '2023-04-23 14:37:32+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ALDS/ALDS_1_10_C.test.cpp
documentation_of: dp/lcs.hpp
layout: document
redirect_from:
- /library/dp/lcs.hpp
- /library/dp/lcs.hpp.html
title: dp/lcs.hpp
---
