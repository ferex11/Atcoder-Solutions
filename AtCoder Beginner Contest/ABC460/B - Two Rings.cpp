#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  ll x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  ll dx = x2 - x1;
  ll dy = y2 - y1;
  ll dist = dx * dx + dy * dy;
  ll mn = (r1 - r2) * (r1 - r2);
  ll mx = (r1 + r2) * (r1 + r2);
  if (mn <= dist && dist <= mx)
    cout << "Yes\n";
  else 
    cout << "No\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
