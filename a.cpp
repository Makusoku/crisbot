#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, a, b;
  cin >> n >> a >> b;
  if (2 * a > b) {
    cout << ((n / 2) * b) + ((n % 2) * a) << '\n';
  } else {
    cout << n * a << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
