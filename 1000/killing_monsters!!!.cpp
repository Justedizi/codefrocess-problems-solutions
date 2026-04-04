#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Monster {
  int rem_hp;
  int id;
};

bool compareMonsters(const Monster &a, const Monster &b) {
  if (a.rem_hp != b.rem_hp) {
    return a.rem_hp > b.rem_hp;
  }
  return a.id < b.id;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<Monster> monsters(n);

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    int rem = a % k;
    if (rem == 0)
      rem = k;

    monsters[i] = {rem, i + 1};
  }

  sort(monsters.begin(), monsters.end(), compareMonsters);

  for (int i = 0; i < n; i++) {
    cout << monsters[i].id << (i == n - 1 ? "" : " ");
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
