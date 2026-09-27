#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
const vector<tuple<int, int, char>> directions = {
    {0, -1, 'L'}, {0, 1, 'R'}, {-1, 0, 'U'}, {1, 0, 'D'}
};

bool isValid(int x, int y, int n, int m, const vector<vector<char>>& labyrinth, vector<vector<bool>>& visited) {
    return x >= 0 && x < n && y >= 0 && y < m && labyrinth[x][y] != '#' && !visited[x][y];
}

pair<string, int> bfs(int n, int m, const vector<vector<char>>& labyrinth, const pair<int, int>& start, const pair<int, int>& end) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<tuple<int, int, string>> q;
    q.push({start.first, start.second, ""});
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        auto [x, y, path] = q.front();
        q.pop();

        for (const auto& [dx, dy, dir] : directions) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx == end.first && ny == end.second) {
                return {path + dir, path.size() + 1};
            }
            if (isValid(nx, ny, n, m, labyrinth, visited)) {
                visited[nx][ny] = true;
                q.push({nx, ny, path + dir});
            }
        }
    }

    return {"", -1};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> labyrinth(n, vector<char>(m));
    pair<int, int> start, end;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> labyrinth[i][j];
            if (labyrinth[i][j] == 'A') {
                start = {i, j};
            } else if (labyrinth[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    auto [path, length] = bfs(n, m, labyrinth, start, end);
    if (length != -1) {
        cout << "YES" << endl;
        cout << length << endl;
        cout << path << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}