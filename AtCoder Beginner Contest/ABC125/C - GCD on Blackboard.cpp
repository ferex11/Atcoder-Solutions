#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  while (b != 0) {
    long long r = a % b;
    a = b;
    b = r;
  }
  return a;
}

void solve() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<long long> pref(N);
  pref[0] = A[0];
  for (int i = 1; i < N; i++) {
    pref[i] = gcd(pref[i - 1], A[i]);
  }
  vector<long long> suf(N);
  suf[N - 1] = A[N - 1];
  for (int i = N - 2; i >= 0; i--) {
    suf[i] = gcd(suf[i + 1], A[i]);
  }
  long long ans = 0;
  long long current_gcd = 0;
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      current_gcd = suf[1];
    } else if (i == N - 1) {
      current_gcd = pref[N - 2];
    } else {
      current_gcd = gcd(pref[i - 1], suf[i + 1]);
    }
    ans = max(ans, current_gcd);
  }
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
