#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    unsigned int n, x;
    cin >> n >> x;
    queue<unsigned int> books[3];
    unsigned int temp;

    for (int j = 0; j < 3; j++) {
      for (int i = 0; i < n; i++) {
        cin >> temp;
        books[j].push(temp);
      }
    }

    unsigned int start = 0;
    unsigned int y = ~x;

    while (true) {
      unsigned int old = start;
      if (start == x)
        break;

      for (int i = 0; i < 3; i++) {
        while (!books[i].empty() && ((books[i].front() & y) == 0)) {
          start |= books[i].front();
          books[i].pop();
        }
      }

      if (start == old)
        break;
    }
    if (start == x)
      cout << "yes" << '\n';
    else
      cout << "no" << '\n';
  }

  return 0;
}
