#include <functional>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<P> Vp;

Vp read_vector() {
  int n;
  cin >> n;
  Vp v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first >> v[i].second;
  }
  return v;
}

ll simulate(ll t, const Vp& v) {
  ll c = 0;
  for (auto& p : v) {
    if (p.first <= t) {
      c += 1 + (t - p.first) / p.second;
    }
  }
  return c;
}

ll fun(ll t, const Vp& v1, const Vp& v2) {
  ll lb = 0;
  ll ub = t + 1;
  while (lb < ub) {
    ll mid = (lb + ub) / 2;
    ll c1 = simulate(mid, v1);
    ll c2 = simulate(t - mid, v2);
    if (c1 > c2) {
      ub = mid;
    } else {
      lb = mid + 1;
    }
  }
  return ub - 1;
}

int main() {
  ll t;
  cin >> t;
  Vp v1 = read_vector();
  Vp v2 = read_vector();
  cout << fun(t, v1, v2) << endl;
}
