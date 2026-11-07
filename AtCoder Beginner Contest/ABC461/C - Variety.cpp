#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int N, K, M;
  cin >> N >> K >> M;
  vector<vector<int>> t(N + 1);
  for (int i = 0; i < N; i++) {
    int C, V;
    cin >> C >> V;
    t[C].pb(V);
  }
  vector<int> top, tail;
  for (auto& r : t) {
    if (r.empty()) continue;
    sort(r.rbegin(), r.rend());
    top.pb(r[0]);
    for (int i = 1; i < (int)r.size(); i++)
      tail.pb(r[i]);
  }
  sort(top.rbegin(), top.rend());
  for (int i = M; i < (int)top.size(); i++)
    tail.pb(top[i]);
  sort(tail.rbegin(), tail.rend());
  ll ans = 0;
  for (int i = 0; i < M && i < (int)top.size(); i++)
    ans += top[i];
  for (int i = 0; i < K - M && i < (int)tail.size(); i++)
    ans += tail[i];
  cout << ans << endl;  
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
