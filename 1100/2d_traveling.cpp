#include <bits/stdc++.h>
using namespace std;

long long manhattan_distance(pair<long long, long long> p1,
                             pair<long long, long long> p2) {
  return 1LL * (abs(p1.first - p2.first) + abs(p1.second - p2.second));
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<long long, long long>> cities(n);
    for (int i = 0; i < n; i++) {
      cin >> cities[i].first >> cities[i].second;
    }
    long long min_total_cost = manhattan_distance(cities[a - 1], cities[b - 1]);

    if (k > 0) {
      long long min_dist_from_a = 1e18;
      long long min_dist_from_b = 1e18;

      for (int i = 0; i < k; i++) {
        min_dist_from_a =
            min(min_dist_from_a, manhattan_distance(cities[a - 1], cities[i]));
        min_dist_from_b =
            min(min_dist_from_b, manhattan_distance(cities[b - 1], cities[i]));
      }

      min_total_cost = min(min_total_cost, min_dist_from_a + min_dist_from_b);
    }
    cout << min_total_cost << '\n';
  }
}
