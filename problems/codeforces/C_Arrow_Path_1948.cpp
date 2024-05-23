#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool dfs(int x, int y, int n, vector<string> &a, vector<vector<bool>> &visited,
         int action) {

  if (y == n - 1 && x == 1)
    return true;

  if (x < 0 || x > 1 || y < 0 || y >= n)
    return false;

  if (visited[x][y] == true)
    return false;

  visited[x][y] = true;

  bool ans = false;

  if (action == 0) {
    ans = dfs(x - 1, y, n, a, visited, 1) || dfs(x + 1, y, n, a, visited, 1) ||
          dfs(x, y - 1, n, a, visited, 1) || dfs(x, y + 1, n, a, visited, 1);

  } else {
    if (a[x][y] == '>') {
      ans = dfs(x, y + 1, n, a, visited, 0);
    } else {
      ans = dfs(x, y - 1, n, a, visited, 0);
    }
  }

  return ans;
}

void solve() {
  int n;
  cin >> n;

  vector<string> a(2);

  for (int i = 0; i < 2; i++) {
    cin >> a[i];
  }

  vector<vector<bool>> visited(2, vector<bool>(n, false));

  bool reachedLast = dfs(0, 0, n, a, visited, 0);

  if (reachedLast)
    cout << "YES\n";
  else
    cout << "NO\n";

  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cout << fixed;
  cout << setprecision(10);
  int i;
  int n;
  cin >> n;
  for (i = 0; i < n; i++) {
    solve();
  }
  return 0;
}
