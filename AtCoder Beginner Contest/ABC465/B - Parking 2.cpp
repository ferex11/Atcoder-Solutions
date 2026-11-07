#include<bits/stdc++.h>
using namespace std;

void solve() {
  int x, y, l, r, a, b;
  cin >> x >> y >> l >> r >> a >> b;
  int total_charged = 0;
  for (int i = a; i < b; i++) {
    if (l <= i && i < r) total_charged += x;
    else total_charged += y;
  }
  cout << total_charged << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
