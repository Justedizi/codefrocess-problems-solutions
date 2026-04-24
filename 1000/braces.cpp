#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int balance = 0;
    int lowes_balance = 0;
    for (auto a : s) {
      if (a == ')')
        balance--;
      else
        balance++;
      lowes_balance = min(balance, lowes_balance);
    }
    cout << lowes_balance * -1 << '\n';
  }

  return 0;
}
