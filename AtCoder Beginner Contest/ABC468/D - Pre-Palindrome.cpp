#include<bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;
  int N = (int)S.size();
  long long answer = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 2; j++) {
      int left = i;
      int right = i + j;
      int count = 0;
      while (left >= 0 && right < N) {
        if (S[left] != S[right]) {
          count++;
        }
        if (count > 1) {
          break;
        }
        answer++;
        left--;
        right++;
      }
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
