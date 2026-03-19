#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string n;
    cin >> n;
    int op = 0;
    int zeros_found = 0;
    bool five_found = false;
    bool two_or_seven_found = false;
    int inx = 0;
    for (int i = n.size() - 1; i >= 0; i--) {
      inx = i;
      if (n[i] == '0') {
        zeros_found++;
        if (zeros_found == 2)
          break;
      } else if (n[i] == '5') {
        five_found = true;
        if (zeros_found == 1)
          break;
      } else if (five_found && (n[i] == '2' || n[i] == '7')) {
        two_or_seven_found = true;
        break;
      }
    }
    cout << n.size() - inx - 2 << '\n';
  }
}
