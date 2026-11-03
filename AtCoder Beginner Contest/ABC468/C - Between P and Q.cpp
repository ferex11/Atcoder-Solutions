#include<bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> P(N), Q(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> Q[i];
  }
  vector<int> R(N);
  iota(R.begin(), R.end(), 1);
  long long answer = 0;
  do {
    if (P < R && R < Q) {
      answer++;
    }
  } while(next_permutation(R.begin(), R.end()));
  cout << answer << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
