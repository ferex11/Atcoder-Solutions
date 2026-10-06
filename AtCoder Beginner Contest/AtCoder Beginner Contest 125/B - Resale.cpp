#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> V(N);
  for (int &v : V) {
    cin >> v;
  }
  vector<int> C(N);
  for (int &c : C) {
    cin >> c;
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += max(V[i] - C[i], 0);
  }
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
