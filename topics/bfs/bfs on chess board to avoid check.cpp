#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define v vector
#define m unordered_map

// Global variables for simplicity in BFS
int n;
int ax, ay, bx, by, cx, cy;
bool visited[1005][1005];

// 8 directions for king's movement
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool is_safe(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > n) return false;
    if (x == ax || y == ay) return false;
    if (abs(x - ax) == abs(y - ay)) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> ax >> ay >> bx >> by >> cx >> cy)) return 0;

    queue<pair<int, int>> q;
    q.push({bx, by});
    visited[bx][by] = true;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        int x = curr.first;
        int y = curr.second;

        if (x == cx && y == cy) {
            cout << "YES" << endl;
            return 0;
        }

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (is_safe(nx, ny) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}