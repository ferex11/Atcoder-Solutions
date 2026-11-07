#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> grid(H);
  for (int i = 0; i < H; i++) {
    cin >> grid[i];
  }
  vector<int> mp(H * W + 1, 0);
  long long ans = 0;
  for (int i = 0; i < H; i++) {
    vector<int> a(W, 0);
    for (int j = i; j < H; j++) {
      for (int k = 0; k < W; k++) {
        a[k] += (grid[j][k] == '1');
      }
      vector<int> vis;
      vis.push_back(0);
      mp[0] = 1;
      int sum = 0;
      for (int k = 0; k < W; k++) {
        sum += a[k];
        if (sum >= K) {
          ans += mp[sum - K];
        }
        if (mp[sum] == 0) {
          vis.push_back(sum);
        }
        mp[sum]++;
      }
      for (auto& x : vis) {
        mp[x] = 0;
      }
    }
  }
  cout << ans << "\n";
  return 0;
}
