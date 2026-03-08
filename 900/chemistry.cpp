#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    unordered_map<char, int> counter;
    for (int i = 0; i < n; i++) {
      counter[s[i]]++;
    }
    for (auto a : counter) {
      if (a.second % 2 == 1) {
        k--;
      }
    }
    if (k < -1) {
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
    }
  }
}
