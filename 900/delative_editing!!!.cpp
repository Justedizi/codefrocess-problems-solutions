#include <bits/stdc++.h>
#include <iterator>
#include <unordered_map>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    unordered_map<char, int> counter;
    for (auto s : b)
      counter[s]++;

    string res = "";
    for (int i = a.size() - 1; i >= 0; i--) {
      char curr = a[i];
      if (counter[curr] > 0) {
        res += curr;
        counter[curr]--;
      }
    }
    reverse(res.begin(), res.end());
    if (res == b) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
