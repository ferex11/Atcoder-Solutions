#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<long long> A(N);
  int neg = 0;
  long long tot = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] < 0) {
      A[i] = -A[i];
      neg++;
    }
    tot += A[i];
  }
  sort(A.begin(), A.end());
  if (neg & 1) {
    tot -= 2 * A[0];
  }
  cout << tot << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
