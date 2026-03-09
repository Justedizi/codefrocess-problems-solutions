#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<char> prenteces(n);
    for (int i = 0; i < n; i++) {
      cin >> prenteces[i];
    }
    int max_seq = 1, curr_seq = 1;
    for (int i = 1; i < n; i++) {
      if (prenteces[i] == prenteces[i - 1]) {
        curr_seq++;
      } else {
        max_seq = max(curr_seq, max_seq);
        curr_seq = 1;
      }
    }
    max_seq = max(max_seq, curr_seq);
    cout << max_seq + 1 << '\n';
  }
}
