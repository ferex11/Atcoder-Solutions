#include<bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if (3 * a > 2 * b) cout << "Yes\n";
  else cout << "No\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
