/**
 * @file Tree-DFS-and-Cycle-Detection.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Tree traversals, constraint propagation, and bipartite cycle detection.
 * 
 * Relevant to Codeforces problems:
 * - 580C: Kefa and Park (Rating 1500) - DFS on tree with state tracking along path
 * - 216B: Forming Teams (Rating 1700) - Bipartite graph coloring & odd cycle detection
 * - 1037D: Valid BFS? (Rating 1700) - Graph traversal sequence validation
 */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 1. Tree DFS: Subtree size & depth calculation
void treeDFS(int u, int p, int d, const vector<vector<int>>& adj, vector<int>& depth, vector<int>& subtreeSize) {
    depth[u] = d;
    subtreeSize[u] = 1;
    for (int v : adj[u]) {
        if (v != p) {
            treeDFS(v, u, d + 1, adj, depth, subtreeSize);
            subtreeSize[u] += subtreeSize[v];
        }
    }
}

// 2. Bipartite Checking & Cycle Detection in Undirected Graph (2-Coloring)
// Returns true if graph is bipartite (contains NO odd-length cycles)
bool isBipartite(int start, const vector<vector<int>>& adj, vector<int>& color) {
    color[start] = 1;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (color[v] == -1) {
                // Color with opposite color
                color[v] = 1 - color[u];
                q.push(v);
            } else if (color[v] == color[u]) {
                // Same color neighbor detected -> odd cycle!
                return false;
            }
        }
    }
    return true;
}

// 3. Tree Leaf Counting with Path Constraints (Archetype: Kefa and Park)
int countValidLeaves(int u, int p, int consecutiveCats, int maxAllowed,
                     const vector<int>& hasCat, const vector<vector<int>>& adj) {
    if (hasCat[u]) consecutiveCats++;
    else consecutiveCats = 0;

    if (consecutiveCats > maxAllowed) return 0;

    bool isLeaf = true;
    int validLeaves = 0;

    for (int v : adj[u]) {
        if (v != p) {
            isLeaf = false;
            validLeaves += countValidLeaves(v, u, consecutiveCats, maxAllowed, hasCat, adj);
        }
    }

    return isLeaf ? 1 : validLeaves;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;
    vector<vector<int>> adj(n + 1);
    // Tree edges: 1-2, 1-3, 2-4, 2-5
    adj[1].push_back(2); adj[2].push_back(1);
    adj[1].push_back(3); adj[3].push_back(1);
    adj[2].push_back(4); adj[4].push_back(2);
    adj[2].push_back(5); adj[5].push_back(2);

    vector<int> depth(n + 1, 0), subtreeSize(n + 1, 0);
    treeDFS(1, 0, 0, adj, depth, subtreeSize);

    cout << "Tree Rooted at 1:\n";
    for (int i = 1; i <= n; ++i) {
        cout << "Node " << i << " -> Depth: " << depth[i] << ", Subtree Size: " << subtreeSize[i] << "\n";
    }

    return 0;
}
