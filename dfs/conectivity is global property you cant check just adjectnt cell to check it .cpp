// https://codeforces.com/problemset/problem/377/A
#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<string> maze;
int visited_count = 0;
int total_empty = 0;
int cells_to_keep = 0;

// Direction arrays: Up, Down, Left, Right
// This is the cleanest way to handle 4-way movement.
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y) {
    // If we have already saved enough cells, stop immediately!
    if (visited_count == cells_to_keep) return;

    visited_count++;
    // Mark this cell as part of our "Safe Territory"
    // We use a temporary marker 'V' (Visited)
    maze[x][y] = 'V'; 

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Check bounds and if it is an empty cell we haven't visited yet
        if (isValid(nx, ny) && maze[nx][ny] == '.') {
            dfs(nx, ny);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    cin >> n >> m >> k;
    maze.resize(n);

    // 1. Read Input & Count Empty Cells
    for(int i = 0; i < n; i++) {
        cin >> maze[i];
        for(char c : maze[i]) {
            if(c == '.') total_empty++;
        }
    }

    // 2. Calculate the target
    cells_to_keep = total_empty - k;

    // 3. Find ANY starting empty cell
    int startX = -1, startY = -1;
    bool found = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(maze[i][j] == '.') {
                startX = i;
                startY = j;
                found = true;
                break;
            }
        }
        if(found) break;
    }

    // 4. Run DFS to mark exactly 'cells_to_keep' as 'V'
    if (found) {
        dfs(startX, startY);
    }

    // 5. Post-processing
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(maze[i][j] == '.') {
                cout << 'X';
            } else if (maze[i][j] == 'V') {
                cout << '.';
            } else {
                cout << maze[i][j]; // Originally 'X' or other characters
            }
        }
        cout << "\n";
    }

    return 0;
}
