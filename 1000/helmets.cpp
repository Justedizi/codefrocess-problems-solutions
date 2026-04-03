#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
  int n;
  ll p;
  if (!(cin >> n >> p))
    return;

  vector<pair<ll, ll>> residents(n);
  for (int i = 0; i < n; i++)
    cin >> residents[i].first;
  for (int i = 0; i < n; i++)
    cin >> residents[i].second;

  sort(residents.begin(), residents.end(),
       [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
         return a.second < b.second;
       });

  ll total_cost = p;
  int notified_count = 1;

  for (int i = 0; i < n && notified_count < n; i++) {
    if (residents[i].second >= p)
      break;

    int can_notify = residents[i].first;
    int remaining_to_notify = n - notified_count;

    int actually_notified = min(can_notify, remaining_to_notify);

    total_cost += (ll)actually_notified * residents[i].second;
    notified_count += actually_notified;
  }

  if (notified_count < n) {
    total_cost += (ll)(n - notified_count) * p;
  }

  cout << total_cost << "\n";
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
