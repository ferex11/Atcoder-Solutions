#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x < 0) cnt++;
  }
  if (cnt == n) cout << "Yes\n";
  else cout << "No\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
