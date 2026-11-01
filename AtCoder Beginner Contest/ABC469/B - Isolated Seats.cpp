#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 1 && s[0] == 'x') {
    cout << "1\n";
    return;
  }
  int cnt = 0;
  if (s[0] == 'x' && s[1] == 'x') {
    cnt++;
  }
  if (s[n - 1] == 'x' && s[n - 2] == 'x') {
    cnt++;
  }
  for (int i = 1; i < n - 1; i++) {
    if (s[i - 1] == 'x' && s[i] == 'x' && s[i + 1] == 'x') {
      cnt++;
    }
  }
  cout << cnt << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
