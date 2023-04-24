---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template/graph-template.hpp
    title: graph/graph-template/graph-template.hpp
  - icon: ':warning:'
    path: graph/ordered-topological-sort.hpp
    title: graph/ordered-topological-sort.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://atcoder.jp/contests/abc223/tasks/abc223_d
  bundledCode: "#line 1 \"test/atcoder/abc_223_D.cpp\"\n#define PROBLEM \"https://atcoder.jp/contests/abc223/tasks/abc223_d\"\
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
    \ (a < 0)\n    return a + mod;\n  return a % mod;\n}\n\ntemplate <typename T>\n\
    map<T, ll> counter(vector<T> a)\n{\n  map<T, ll> res;\n  rep(a.size())\n  {\n\
    \    if (res.count(a[i]) == 0)\n      res[a[i]] = 1;\n    else\n      res[a[i]]++;\n\
    \  }\n  return res;\n}\n#line 2 \"graph/graph-template/graph-template.hpp\"\n\
    struct Edge\n{\n    ll from;\n    ll to;\n    ll cost;\n    bool operator<(const\
    \ Edge &o) const\n    {\n        return cost < o.cost;\n    }\n};\n\nusing Graph\
    \ = vector<vector<Edge>>;\n#line 2 \"graph/ordered-topological-sort.hpp\"\n//\
    \ https: // atcoder.jp/contests/abc223/tasks/abc223_d\n\nstruct ordered_topological_sort\n\
    {\n    pq<ll> que;\n    vector<Edge> edges;\n    vector<ll> dig;\n    ll v;\n\
    \    vector<vector<ll>> g;\n    vector<pair<bool, bool>> used1;\n    vector<ll>\
    \ order;\n    bool has_cycle = false;\n    ordered_topological_sort(vector<Edge>\
    \ e, ll n)\n    {\n        edges = e;\n        v = n;\n        g.assign(v, vector<ll>());\n\
    \        dig.assign(v, 0);\n        used1.assign(v, {false, false});\n       \
    \ rep(edges.size())\n        {\n            g[edges[i].from].push_back(edges[i].to);\n\
    \            dig[edges[i].to]++;\n        }\n    }\n    void setup()\n    {\n\
    \        rep(v)\n        {\n            if (dig[i] == 0)\n            {\n    \
    \            que.push(i);\n            }\n        }\n        while (!que.empty())\n\
    \        {\n            ll top = que.top();\n            que.pop();\n        \
    \    for (auto t : g[top])\n            {\n                dig[t]--;\n       \
    \         if (dig[t] == 0)\n                    que.push(t);\n            }\n\
    \            order.push_back(top);\n        }\n        if (order.size() != v)\n\
    \            has_cycle = true;\n    }\n\n    void dfs(ll s)\n    {\n        used1[s]\
    \ = {true, false};\n        for (auto t : g[s])\n        {\n            if (used1[t].first\
    \ && !used1[t].second)\n                has_cycle = true;\n            if (!used1[t].first)\n\
    \                dfs(t);\n        }\n        used1[s] = {true, true};\n      \
    \  order.push_back(s);\n    }\n};\n#line 4 \"test/atcoder/abc_223_D.cpp\"\n\n\
    int main()\n{\n    LL(n, m);\n    vector<Edge> g;\n    rep(m)\n    {\n       \
    \ LL(a, b);\n        a--;\n        b--;\n        g.push_back(Edge{a, b, 1});\n\
    \    }\n    auto s = ordered_topological_sort(g, n);\n    s.setup();\n    if (s.has_cycle)\n\
    \    {\n        out(-1);\n    }\n    else\n    {\n        rep(n)\n        {\n\
    \            s.order[i]++;\n        }\n        out(s.order);\n    }\n}\n"
  code: "#define PROBLEM \"https://atcoder.jp/contests/abc223/tasks/abc223_d\"\n#include\
    \ \"../../template/template.hpp\"\n#include \"../../graph/ordered-topological-sort.hpp\"\
    \n\nint main()\n{\n    LL(n, m);\n    vector<Edge> g;\n    rep(m)\n    {\n   \
    \     LL(a, b);\n        a--;\n        b--;\n        g.push_back(Edge{a, b, 1});\n\
    \    }\n    auto s = ordered_topological_sort(g, n);\n    s.setup();\n    if (s.has_cycle)\n\
    \    {\n        out(-1);\n    }\n    else\n    {\n        rep(n)\n        {\n\
    \            s.order[i]++;\n        }\n        out(s.order);\n    }\n}\n"
  dependsOn:
  - template/template.hpp
  - graph/ordered-topological-sort.hpp
  - graph/graph-template/graph-template.hpp
  isVerificationFile: false
  path: test/atcoder/abc_223_D.cpp
  requiredBy: []
  timestamp: '2023-04-20 17:13:07+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/atcoder/abc_223_D.cpp
layout: document
redirect_from:
- /library/test/atcoder/abc_223_D.cpp
- /library/test/atcoder/abc_223_D.cpp.html
title: test/atcoder/abc_223_D.cpp
---