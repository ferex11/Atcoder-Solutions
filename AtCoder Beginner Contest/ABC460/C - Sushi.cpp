#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  vector<ll> b(m);
  for (auto& x : b) cin >> x;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 0;
  int i = 0;
  int j = 0;
  while (i < n && j < m) {
    if (b[j] <= 2 * a[i]) {
      ans++;
      i++;
      j++;
    } else {
      i++;
    }
  }
  cout << ans << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
