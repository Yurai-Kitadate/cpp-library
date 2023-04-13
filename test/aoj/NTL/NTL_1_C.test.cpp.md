---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/lcm.hpp
    title: lcm
  - icon: ':question:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C
  bundledCode: "#line 1 \"test/aoj/NTL/NTL_1_C.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C\"\
    \n#line 1 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing ld = long double;\nusing ull = unsigned long\
    \ long;\nusing uint = unsigned;\nusing vll = vector<ll>;\nusing pii = pair<int,\
    \ int>;\nusing pll = pair<ll, ll>;\nusing pdd = pair<ld, ld>;\nusing tuplis =\
    \ array<ll, 3>;\ntemplate <class T>\nusing pq = priority_queue<T, vector<T>, greater<T>>;\n\
    const ll LINF = 0x1fffffffffffffff;\nconst ll MINF = 0x7fffffffffff;\nconst int\
    \ INF = 0x3fffffff;\nconst int MOD = 1000000007;\nconst int MODD = 998244353;\n\
    const ld DINF = numeric_limits<ld>::infinity();\nconst ld EPS = 1e-9;\nconst ld\
    \ PI = 3.1415926535897932;\nconst ll dx[] = {0, 1, 0, -1, 1, -1, 1, -1};\nconst\
    \ ll dy[] = {1, 0, -1, 0, 1, 1, -1, -1};\n#define overload5(a, b, c, d, e, name,\
    \ ...) name\n#define overload4(a, b, c, d, name, ...) name\n#define overload3(a,\
    \ b, c, name, ...) name\n#define rep1(n) for (ll i = 0; i < n; ++i)\n#define rep2(i,\
    \ n) for (ll i = 0; i < n; ++i)\n#define rep3(i, a, b) for (ll i = a; i < b; ++i)\n\
    #define rep4(i, a, b, c) for (ll i = a; i < b; i += c)\n#define rep(...) overload4(__VA_ARGS__,\
    \ rep4, rep3, rep2, rep1)(__VA_ARGS__)\n#define rrep1(n) for (ll i = n; i--;)\n\
    #define rrep2(i, n) for (ll i = n; i--;)\n#define rrep3(i, a, b) for (ll i = b;\
    \ i-- > (a);)\n#define rrep4(i, a, b, c) for (ll i = (a) + ((b) - (a)-1) / (c)\
    \ * (c); i >= (a); i -= c)\n#define rrep(...) overload4(__VA_ARGS__, rrep4, rrep3,\
    \ rrep2, rrep1)(__VA_ARGS__)\n#define each1(i, a) for (auto &&i : a)\n#define\
    \ each2(x, y, a) for (auto &&[x, y] : a)\n#define each3(x, y, z, a) for (auto\
    \ &&[x, y, z] : a)\n#define each4(w, x, y, z, a) for (auto &&[w, x, y, z] : a)\n\
    #define each(...) overload5(__VA_ARGS__, each4, each3, each2, each1)(__VA_ARGS__)\n\
    #define all1(i) begin(i), end(i)\n#define all2(i, a) begin(i), begin(i) + a\n\
    #define all3(i, a, b) begin(i) + a, begin(i) + b\n#define all(...) overload3(__VA_ARGS__,\
    \ all3, all2, all1)(__VA_ARGS__)\n#define rall1(i) rbegin(i), rend(i)\n#define\
    \ rall2(i, a) rbegin(i), rbegin(i) + a\n#define rall3(i, a, b) rbegin(i) + a,\
    \ rbegin(i) + b\n#define rall(...) overload3(__VA_ARGS__, rall3, rall2, rall1)(__VA_ARGS__)\n\
    #define sum(...) accumulate(all(__VA_ARGS__), 0LL)\n#define dsum(...) accumulate(all(__VA_ARGS__),\
    \ 0.0L)\n#define Msum(...) accumulate(all(__VA_ARGS__), Modint{})\n#define elif\
    \ else if\n#define INT(...)   \\\n  int __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define\
    \ LL(...)   \\\n  ll __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define ULL(...)   \\\
    \n  ull __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define STR(...)      \\\n  string\
    \ __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define CHR(...)    \\\n  char __VA_ARGS__;\
    \ \\\n  in(__VA_ARGS__)\n#define DBL(...)      \\\n  double __VA_ARGS__; \\\n\
    \  in(__VA_ARGS__)\n#define LD(...)   \\\n  ld __VA_ARGS__; \\\n  in(__VA_ARGS__)\n\
    #define vec(type, name, ...) vector<type> name(__VA_ARGS__)\n#define VEC(type,\
    \ name, size) \\\n  vector<type> name(size);    \\\n  in(name)\n#define vv(type,\
    \ name, h, ...) vector name(h, vector<type>(__VA_ARGS__))\n#define VV(type, name,\
    \ h, w)       \\\n  vector name(h, vector<type>(w)); \\\n  in(name)\n#define vvv(type,\
    \ name, h, w, ...) vector name(h, vector(w, vector<type>(__VA_ARGS__)))\ntemplate\
    \ <class T>\nauto min(const T &a)\n{\n  return *min_element(all(a));\n}\n\ntemplate\
    \ <class... Ts>\nvoid in(Ts &...t);\n[[maybe_unused]] void print() {}\ntemplate\
    \ <class T, class... Ts>\nvoid print(const T &t, const Ts &...ts);\ntemplate <class...\
    \ Ts>\nvoid out(const Ts &...ts)\n{\n  print(ts...);\n  cout << '\\n';\n}\nnamespace\
    \ IO\n{\n#define VOID(a) decltype(void(a))\n  struct S\n  {\n    S()\n    {\n\
    \      cin.tie(nullptr)->sync_with_stdio(0);\n      fixed(cout).precision(12);\n\
    \    }\n  } S;\n  template <int I>\n  struct P : P<I - 1>\n  {\n  };\n  template\
    \ <>\n  struct P<0>\n  {\n  };\n  template <class T>\n  void i(T &t) { i(t, P<3>{});\
    \ }\n  void i(vector<bool>::reference t, P<3>)\n  {\n    int a;\n    i(a);\n \
    \   t = a;\n  }\n  template <class T>\n  auto i(T &t, P<2>) -> VOID(cin >> t)\
    \ { cin >> t; }\n  template <class T>\n  auto i(T &t, P<1>) -> VOID(begin(t))\n\
    \  {\n    for (auto &&x : t)\n      i(x);\n  }\n  template <class T, size_t...\
    \ idx>\n  void ituple(T &t, index_sequence<idx...>) { in(get<idx>(t)...); }\n\
    \  template <class T>\n  auto i(T &t, P<0>) -> VOID(tuple_size<T>{}) { ituple(t,\
    \ make_index_sequence<tuple_size<T>::value>{}); }\n  template <class T>\n  void\
    \ o(const T &t) { o(t, P<4>{}); }\n  template <size_t N>\n  void o(const char\
    \ (&t)[N], P<4>) { cout << t; }\n  template <class T, size_t N>\n  void o(const\
    \ T (&t)[N], P<3>)\n  {\n    o(t[0]);\n    for (size_t i = 1; i < N; i++)\n  \
    \  {\n      o(' ');\n      o(t[i]);\n    }\n  }\n  template <class T>\n  auto\
    \ o(const T &t, P<2>) -> VOID(cout << t) { cout << t; }\n  template <class T>\n\
    \  auto o(const T &t, P<1>) -> VOID(begin(t))\n  {\n    bool first = 1;\n    for\
    \ (auto &&x : t)\n    {\n      if (first)\n        first = 0;\n      else\n  \
    \      o(' ');\n      o(x);\n    }\n  }\n  template <class T, size_t... idx>\n\
    \  void otuple(const T &t, index_sequence<idx...>) { print(get<idx>(t)...); }\n\
    \  template <class T>\n  auto o(T &t, P<0>) -> VOID(tuple_size<T>{}) { otuple(t,\
    \ make_index_sequence<tuple_size<T>::value>{}); }\n#undef VOID\n}\n#define unpack(a)\
    \             \\\n  (void)initializer_list<int> \\\n  {                      \
    \     \\\n    (a, 0)...                 \\\n  }\ntemplate <class... Ts>\nvoid\
    \ in(Ts &...t)\n{\n  unpack(IO::i(t));\n}\ntemplate <class T, class... Ts>\nvoid\
    \ print(const T &t, const Ts &...ts)\n{\n  IO::o(t);\n  unpack(IO::o((cout <<\
    \ ' ', ts)));\n}\n#undef unpack\n#ifdef DEBUG\nll __lg(ull x)\n{\n  return 63\
    \ - __builtin_clzll(x);\n}\n#define debug(...)       \\\n  {                 \
    \     \\\n    print(#__VA_ARGS__); \\\n    print(\":\");          \\\n    out(__VA_ARGS__);\
    \    \\\n  }\n#else\n#define debug(...) void(0)\n#endif\n#define YESNO(yes, no)\
    \   \\\n  void yes(bool i = 1)   \\\n  {                      \\\n    out(i ?\
    \ #yes : #no); \\\n  }                      \\\n  void no()              \\\n\
    \  {                      \\\n    out(#no);            \\\n  }\nYESNO(first, second)\n\
    YESNO(First, Second)\nYESNO(Yes, No)\nYESNO(YES, NO)\nYESNO(possible, impossible)\n\
    YESNO(POSSIBLE, IMPOSSIBLE)\ntemplate <class... T>\nconstexpr auto min(T... a)\n\
    {\n  return min(initializer_list{a...});\n}\nll mod_abs(ll a, ll mod)\n{\n  if\
    \ (a < 0)\n    return a + mod;\n  return a % mod;\n}\n#line 1 \"math/lcm.hpp\"\
    \nll lcm(ll a, ll b)\n{\n    return a * b / gcd(a, b);\n}\n#line 4 \"test/aoj/NTL/NTL_1_C.test.cpp\"\
    \n\nint main()\n{\n    LL(n);\n    VEC(ll, a, n);\n    ll res = a[0];\n    rep(n)\n\
    \    {\n        res = lcm(res, a[i]);\n    }\n    out(res);\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C\"\
    \n#include \"../../../template/template.hpp\"\n#include \"../../../math/lcm.hpp\"\
    \n\nint main()\n{\n    LL(n);\n    VEC(ll, a, n);\n    ll res = a[0];\n    rep(n)\n\
    \    {\n        res = lcm(res, a[i]);\n    }\n    out(res);\n}\n"
  dependsOn:
  - template/template.hpp
  - math/lcm.hpp
  isVerificationFile: true
  path: test/aoj/NTL/NTL_1_C.test.cpp
  requiredBy: []
  timestamp: '2023-04-13 16:14:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/NTL/NTL_1_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/NTL/NTL_1_C.test.cpp
- /verify/test/aoj/NTL/NTL_1_C.test.cpp.html
title: test/aoj/NTL/NTL_1_C.test.cpp
---
