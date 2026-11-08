#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pll pair<ll, ll>

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> dum(n, vector<char> (m)), ar(n, vector<char> (m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c == '#') dum[i][j] = 'b';
      else dum[i][j] = 'w';
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (dum[i][j] == 'b') {
        ar[i][j] = 'w';
        continue;
      }
      ar[i][j] = 'w';
      for (int di = -1; di <= 1; di++) {
        for (int dj = -1; dj <= 1; dj++) {
          int newi = i + di;
          int newj = j + dj;
          if ((di == 0 && dj == 0) || newi < 0 || newi >= n || newj < 0 || newj >= m) continue;
          if (dum[newi][newj] != dum[i][j]) ar[i][j] = 'b';
        }
      }
    }
  }
  vector<vector<ll>> dist(n, vector<ll> (m, inf));
  queue<pll> q;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (ar[i][j] == 'b') {
        dist[i][j] = 0;
        q.push({i, j});
      }
    }
  }
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    ll row = p.first;
    ll col = p.second;
    for (int delrow = -1; delrow <= 1; delrow++) {
      for (int delcol = -1; delcol <= 1; delcol++) {
        int nrow = row + delrow;
        int ncol = col + delcol;
        if ((delrow == 0 && delcol == 0) || nrow < 0 || nrow >= n || ncol < 0 || ncol >= m) continue;
        if (dist[nrow][ncol] > 1 + dist[row][col]) {
          dist[nrow][ncol] = 1 + dist[row][col];
          q.push({nrow, ncol});
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (dist[i][j] & 1) cout << '#';
      else cout << '.';
    }
    cout << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
