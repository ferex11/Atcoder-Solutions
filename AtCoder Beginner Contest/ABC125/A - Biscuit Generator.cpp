#include <bits/stdc++.h>
using namespace std;

void solve() {
  int A, B, T;
  cin >> A >> B >> T;
  int ans = (T / A) * B;
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
