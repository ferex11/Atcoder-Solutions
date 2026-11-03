#include<bits/stdc++.h>
using namespace std;

void solve() {
  int M, D;
  cin >> M >> D;
  string S;
  cin >> S;
  int answer = 0;
  for (int x = 0; x < M; x++) {
    bool watched = false;
    for (int i = 0; i < M; i++) {
      if (S[i] == 'G' && abs(x - i) <= D) {
        watched = true;
        break;
      }
    }
    if (!watched) {
      answer++;
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
