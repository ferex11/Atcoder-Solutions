#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int b, c;
    cin >> b >> c;
    if (!mp.count(b)) mp[b] = c;
    else {
      if (mp[b] < c) mp[b] = c;
    }
  }
  for (int k = 1; k <= m; k++) {
    if (!mp.count(k)) cout << "-1 ";
    else cout << mp[k] << " ";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
