#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    bool found = false;
    for (int middle = 1; middle < n - 1; middle++) {
      unsigned char found_two = 0;
      int key = nums[middle];
      int left = middle - 1;
      int right = middle + 1;
      for (; left >= 0; left--) {
        if (key > nums[left]) {
          found_two++;
          break;
        }
      }
      for (; right < n; right++) {
        if (key > nums[right]) {
          found_two++;
          break;
        }
      }
      if (found_two == 2) {
        cout << "YES" << '\n';
        cout << left + 1 << " " << middle + 1 << " " << right + 1 << '\n';
        found = true;
        break;
      }
    }

    if (!found)
      cout << "NO" << '\n';
  }
}
