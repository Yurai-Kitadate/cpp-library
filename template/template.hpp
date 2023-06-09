#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<ld, ld>;
using tuplis = array<ll, 3>;
template <class T>
using pq = priority_queue<T, vector<T>, greater<T>>;
const ll LINF = 0x1fffffffffffffff;
const ll MINF = 0x7fffffffffff;
const int INF = 0x3fffffff;
const int MOD = 1000000007;
const int MODD = 998244353;
const ld DINF = numeric_limits<ld>::infinity();
const ld EPS = 1e-9;
const ld PI = 3.1415926535897932;
const ll dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const ll dy[] = {1, 0, -1, 0, 1, 1, -1, -1};
#define overload5(a, b, c, d, e, name, ...) name
#define overload4(a, b, c, d, name, ...) name
#define overload3(a, b, c, name, ...) name
#define rep1(n) for (ll i = 0; i < n; ++i)
#define rep2(i, n) for (ll i = 0; i < n; ++i)
#define rep3(i, a, b) for (ll i = a; i < b; ++i)
#define rep4(i, a, b, c) for (ll i = a; i < b; i += c)
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep1(n) for (ll i = n; i--;)
#define rrep2(i, n) for (ll i = n; i--;)
#define rrep3(i, a, b) for (ll i = b; i-- > (a);)
#define rrep4(i, a, b, c) for (ll i = (a) + ((b) - (a)-1) / (c) * (c); i >= (a); i -= c)
#define rrep(...) overload4(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define each1(i, a) for (auto &&i : a)
#define each2(x, y, a) for (auto &&[x, y] : a)
#define each3(x, y, z, a) for (auto &&[x, y, z] : a)
#define each4(w, x, y, z, a) for (auto &&[w, x, y, z] : a)
#define each(...) overload5(__VA_ARGS__, each4, each3, each2, each1)(__VA_ARGS__)
#define all1(i) begin(i), end(i)
#define all2(i, a) begin(i), begin(i) + a
#define all3(i, a, b) begin(i) + a, begin(i) + b
#define all(...) overload3(__VA_ARGS__, all3, all2, all1)(__VA_ARGS__)
#define rall1(i) rbegin(i), rend(i)
#define rall2(i, a) rbegin(i), rbegin(i) + a
#define rall3(i, a, b) rbegin(i) + a, rbegin(i) + b
#define rall(...) overload3(__VA_ARGS__, rall3, rall2, rall1)(__VA_ARGS__)
#define sum(...) accumulate(all(__VA_ARGS__), 0LL)
#define dsum(...) accumulate(all(__VA_ARGS__), 0.0L)
#define Msum(...) accumulate(all(__VA_ARGS__), Modint{})
#define elif else if
#define INT(...)   \
  int __VA_ARGS__; \
  in(__VA_ARGS__)
#define LL(...)   \
  ll __VA_ARGS__; \
  in(__VA_ARGS__)
#define ULL(...)   \
  ull __VA_ARGS__; \
  in(__VA_ARGS__)
#define STR(...)      \
  string __VA_ARGS__; \
  in(__VA_ARGS__)
#define CHR(...)    \
  char __VA_ARGS__; \
  in(__VA_ARGS__)
#define DBL(...)      \
  double __VA_ARGS__; \
  in(__VA_ARGS__)
#define LD(...)   \
  ld __VA_ARGS__; \
  in(__VA_ARGS__)
#define vec(type, name, ...) vector<type> name(__VA_ARGS__)
#define VEC(type, name, size) \
  vector<type> name(size);    \
  in(name)
#define vv(type, name, h, ...) vector name(h, vector<type>(__VA_ARGS__))
#define VV(type, name, h, w)       \
  vector name(h, vector<type>(w)); \
  in(name)
#define vvv(type, name, h, w, ...) vector name(h, vector(w, vector<type>(__VA_ARGS__)))
template <class T>
auto min(const T &a)
{
  return *min_element(all(a));
}

template <class... Ts>
void in(Ts &...t);
[[maybe_unused]] void print() {}
template <class T, class... Ts>
void print(const T &t, const Ts &...ts);
template <class... Ts>
void out(const Ts &...ts)
{
  print(ts...);
  cout << '\n';
}
namespace IO
{
#define VOID(a) decltype(void(a))
  struct S
  {
    S()
    {
      cin.tie(nullptr)->sync_with_stdio(0);
      fixed(cout).precision(12);
    }
  } S;
  template <int I>
  struct P : P<I - 1>
  {
  };
  template <>
  struct P<0>
  {
  };
  template <class T>
  void i(T &t) { i(t, P<3>{}); }
  void i(vector<bool>::reference t, P<3>)
  {
    int a;
    i(a);
    t = a;
  }
  template <class T>
  auto i(T &t, P<2>) -> VOID(cin >> t) { cin >> t; }
  template <class T>
  auto i(T &t, P<1>) -> VOID(begin(t))
  {
    for (auto &&x : t)
      i(x);
  }
  template <class T, size_t... idx>
  void ituple(T &t, index_sequence<idx...>) { in(get<idx>(t)...); }
  template <class T>
  auto i(T &t, P<0>) -> VOID(tuple_size<T>{}) { ituple(t, make_index_sequence<tuple_size<T>::value>{}); }
  template <class T>
  void o(const T &t) { o(t, P<4>{}); }
  template <size_t N>
  void o(const char (&t)[N], P<4>) { cout << t; }
  template <class T, size_t N>
  void o(const T (&t)[N], P<3>)
  {
    o(t[0]);
    for (size_t i = 1; i < N; i++)
    {
      o(' ');
      o(t[i]);
    }
  }
  template <class T>
  auto o(const T &t, P<2>) -> VOID(cout << t) { cout << t; }
  template <class T>
  auto o(const T &t, P<1>) -> VOID(begin(t))
  {
    bool first = 1;
    for (auto &&x : t)
    {
      if (first)
        first = 0;
      else
        o(' ');
      o(x);
    }
  }
  template <class T, size_t... idx>
  void otuple(const T &t, index_sequence<idx...>) { print(get<idx>(t)...); }
  template <class T>
  auto o(T &t, P<0>) -> VOID(tuple_size<T>{}) { otuple(t, make_index_sequence<tuple_size<T>::value>{}); }
#undef VOID
}
#define unpack(a)             \
  (void)initializer_list<int> \
  {                           \
    (a, 0)...                 \
  }
template <class... Ts>
void in(Ts &...t)
{
  unpack(IO::i(t));
}
template <class T, class... Ts>
void print(const T &t, const Ts &...ts)
{
  IO::o(t);
  unpack(IO::o((cout << ' ', ts)));
}
#undef unpack
#ifdef DEBUG
ll __lg(ull x)
{
  return 63 - __builtin_clzll(x);
}
#define debug(...)       \
  {                      \
    print(#__VA_ARGS__); \
    print(":");          \
    out(__VA_ARGS__);    \
  }
#else
#define debug(...) void(0)
#endif
#define YESNO(yes, no)   \
  void yes(bool i = 1)   \
  {                      \
    out(i ? #yes : #no); \
  }                      \
  void no()              \
  {                      \
    out(#no);            \
  }
YESNO(first, second)
YESNO(First, Second)
YESNO(Yes, No)
YESNO(YES, NO)
YESNO(possible, impossible)
YESNO(POSSIBLE, IMPOSSIBLE)
template <class... T>
constexpr auto min(T... a)
{
  return min(initializer_list{a...});
}
ll mod_abs(ll a, ll mod)
{
  if (a < 0)
    return a + mod;
  return a % mod;
}

template <typename T>
map<T, ll> counter(vector<T> a)
{
  map<T, ll> res;
  rep(a.size())
  {
    if (res.count(a[i]) == 0)
      res[a[i]] = 1;
    else
      res[a[i]]++;
  }
  return res;
}
