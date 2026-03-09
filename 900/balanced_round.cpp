#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> problems(n);
    for (int i = 0; i < n; i++) {
      cin >> problems[i];
    }
    sort(problems.begin(), problems.end());

    if (n > 1) {
      int max_seq = 1;
      int curr_seq = 1;
      for (int i = 1; i < n; i++) {
        if (abs(problems[i] - problems[i - 1]) <= k) {
          curr_seq++;
        } else {
          max_seq = max(curr_seq, max_seq);
          curr_seq = 1;
        }
        max_seq = max(curr_seq, max_seq);
      }
      cout << n - max_seq << '\n';

    } else {
      cout << 0 << '\n';
    }
  }
}
