#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> quests(n);
    vector<int> subsequnt(n);
    for (int i = 0; i < n; i++)
      cin >> quests[i];
    for (int i = 0; i < n; i++)
      cin >> subsequnt[i];
    k--;
    int max_sum = quests[0] + k * subsequnt[0];
    int curr_sum = quests[0];
    int i = 0;
    while (k > 0 && i < n - 1) {
      int stay = curr_sum + k * subsequnt[i];
      int move = curr_sum + quests[i + 1] + (k - 1) * subsequnt[i + 1];
      max_sum = max(stay, move);
      curr_sum += quests[i];
      i++;
      k--;
    }
    cout << max_sum << '\n';
  }

  return 0;
}
