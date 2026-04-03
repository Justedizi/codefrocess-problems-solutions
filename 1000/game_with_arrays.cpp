#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;

  long long global_min_1 = 2e9;
  vector<int> seconds;

  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    vector<int> arr(m);
    for (int j = 0; j < m; j++)
      cin >> arr[j];

    sort(arr.begin(), arr.end());

    if (arr[0] < global_min_1)
      global_min_1 = arr[0];

    seconds.push_back(arr[1]);
  }

  sort(seconds.begin(), seconds.end());

  long long total_sum = global_min_1;
  for (int i = 1; i < n; i++) {
    total_sum += seconds[i];
  }

  cout << total_sum << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
