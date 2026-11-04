#include<bits/stdc++.h>
using namespace std;

void solve() {
  int h, w;
  cin >> h >> w;
  if (10000 * w >= 25 * h * h) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
