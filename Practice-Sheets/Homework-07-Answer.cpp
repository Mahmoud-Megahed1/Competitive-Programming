// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // bool dfsCycle(int node, int parent, vector<vector<int>>& adj, vector<int>& visited, vector<int>& path) {
// //     visited[node] = 1; // Mark as in the current path

// //     for (int neighbor : adj[node]) {
// //         if (visited[neighbor] == 0) {
// //             path.push_back(neighbor);
// //             if (dfsCycle(neighbor, node, adj, visited, path)) {
// //                 return true;
// //             }
// //             path.pop_back();
// //         } else if (visited[neighbor] == 1 && neighbor != parent) {
// //             // Cycle detected
// //             auto it = find(path.begin(), path.end(), neighbor);
// //             path.erase(path.begin(), it); // Remove nodes before the cycle start
// //             return true;
// //         }
// //     }

// //     visited[node] = 2; // Mark as fully visited
// //     return false;
// // }

// // vector<int> findCycle(int n, vector<vector<int>>& adj) {
// //     vector<int> visited(n + 1, 0);
// //     vector<int> path;

// //     for (int i = 1; i <= n; ++i) {
// //         if (visited[i] == 0) {
// //             path.push_back(i);
// //             if (dfsCycle(i, -1, adj, visited, path)) {
// //                 return path;
// //             }
// //             path.pop_back();
// //         }
// //     }

// //     return {};
// // }

// // int main() {
// //     int n, m;
// //     cin >> n >> m;

// //     vector<vector<int>> adj(n + 1);

// //     for (int i = 0; i < m; ++i) {
// //         int a, b;
// //         cin >> a >> b;
// //         adj[a].push_back(b);
// //         adj[b].push_back(a);
// //     }

// //     vector<int> cycle = findCycle(n, adj);

// //     if (cycle.empty()) {
// //         cout << "IMPOSSIBLE" << endl;
// //     } else {
// //         cout << cycle.size() << endl;
// //         for (int node : cycle) {
// //             cout << node << " ";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// const int MAXN = 1e5 + 5;
// vector<int> adj[MAXN];
// vector<int> parent(MAXN, -1);
// vector<bool> visited(MAXN, false);
// vector<bool> recStack(MAXN, false);
// int cycle_start, cycle_end;

// bool dfs(int v, int par) {
//     visited[v] = true;
//     recStack[v] = true;
//     for (int u : adj[v]) {
//         if (u == par) continue; // Skip the parent to avoid trivial cycles
//         if (visited[u] && recStack[u]) {
//             cycle_start = u;
//             cycle_end = v;
//             return true;
//         }
//         if (!visited[u]) {
//             parent[u] = v;
//             if (dfs(u, v)) return true;
//         }
//     }
//     recStack[v] = false;
//     return false;
// }

// vector<int> find_cycle(int n) {
//     for (int i = 1; i <= n; ++i) {
//         if (!visited[i] && dfs(i, -1)) {
//             vector<int> cycle;
//             for (int v = cycle_end; v != cycle_start; v = parent[v]) {
//                 cycle.push_back(v);
//             }
//             cycle.push_back(cycle_start);
//             cycle.push_back(cycle_end); // To complete the cycle
//             return cycle;
//         }
//     }
//     return {};
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     for (int i = 0; i < m; ++i) {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
    
//     vector<int> cycle = find_cycle(n);
    
//     if (cycle.empty() || cycle.size() < 4) {
//         cout << "IMPOSSIBLE" << endl;
//     } else {
//         cout << cycle.size() << endl;
//         for (int node : cycle) {
//             cout << node << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool dfsCycle(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& parentTrack) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            parentTrack[neighbor] = node;
            if (dfsCycle(neighbor, node, adj, visited, parentTrack)) {
                return true;
            }
        } else if (neighbor != parent) {
            // Cycle detected
            parentTrack[neighbor] = node;
            return true;
        }
    }
    return false;
}

vector<int> findCycle(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n + 1, false);
    vector<int> parentTrack(n + 1, -1);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (dfsCycle(i, -1, adj, visited, parentTrack)) {
                // Reconstruct the cycle
                vector<int> cycle;
                int start = -1, end = -1;
                for (int j = 1; j <= n; j++) {
                    if (parentTrack[j] != -1 && visited[j]) {
                        start = j;
                        end = parentTrack[j];
                        break;
                    }
                }
                if (start != -1 && end != -1) {
                    for (int v = end; v != start; v = parentTrack[v]) {
                        cycle.push_back(v);
                    }
                    cycle.push_back(start);
                    cycle.push_back(end); // To complete the cycle
                    if (cycle.size() >= 4) { // Ensure the cycle has at least 3 distinct cities
                        return cycle;
                    }
                }
            }
        }
    }
    return {};
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n + 1);
    
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> cycle = findCycle(n, adj);
    
    if (cycle.empty() || cycle.size() < 4) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << cycle.size() << endl;
        for (int node : cycle) {
            cout << node << " ";
        }
        cout << endl;
    }
    
    return 0;
}