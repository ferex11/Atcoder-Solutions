#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  long long answer = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    string s;
    cin >> a >> b >> s;
    if (s == "keep") {
      answer += b - a;
    }
  }
  cout << answer << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
