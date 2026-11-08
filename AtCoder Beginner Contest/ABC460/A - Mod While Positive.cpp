#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int n, m;
  cin >> n >> m;
  int ans = 0;
  while (m > 0) {
    int rem = n % m;
    m = rem;
    ans++; 
  }
  cout << ans << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
