#include<bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  int count = 0;
  for (int i = 1; i < N - 1; i++) {
    if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
      count++;
    }
  }
  cout << count << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
