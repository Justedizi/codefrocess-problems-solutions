//
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    string s;
    string o = s;
    cin >> s;
    int zero_c = 0, ones_c = 0, n = s.size();
    int end = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0')
        zero_c++;
      else
        ones_c++;
    }
    bool finished = true;
    for (int i = 0; i < n && finished; i++) {
      if (s[i] == '0') {
        if (ones_c == 0) {
          end = i;
          finished = false;
        }
        ones_c--;
      } else {
        if (zero_c == 0) {
          end = i;
          finished = false;
        }
        zero_c--;
      }
    }
    if (finished)
      end = n;

    cout << n - end << '\n';
  }

  return 0;
}
