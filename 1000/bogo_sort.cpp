#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    // trickey problem make an observation that you need to sort it in reverse
    // order
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    for (auto a : arr) {
      cout << a << " ";
    }
    cout << '\n';
  }
  return 0;
}
