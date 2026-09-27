// // #include <bits/stdc++.h>
// // using namespace std;
// // #define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// // #define ll long long 
// // #define MP make_pair
// // #define sz(v) ((int)(v).size())
// // #define OO INT_MAX
// // #define rep(i, v) for (int i = 0; i < sz(v); ++i)
// // vector<int> BFS(int s, vector<vector<int>> &adj) {
// //     vector<int> len(sz(adj), OO);
// //     queue<pair<int, int>> q;
// //     q.push(MP(s, 0)), len[s] = 0;
// //     int cur, dep;
// //     while (!q.empty()) {
// //         pair<int, int> p = q.front(); q.pop();
// //         cur = p.first, dep = p.second;

// //         rep(i, adj[cur]) {
// //             if (len[adj[cur][i]] == OO) {
// //                 q.push(MP(adj[cur][i], dep + 1));
// //                 len[adj[cur][i]] = dep + 1;
// //             }
// //         }
// //     }
// //     return len; 
// // }
// // int main() {
// //     IOS;
// //     int n, m;
// //     cin >> n >> m;
// //     vector<vector<int>> adj(n);
// //     for (int i = 0; i < m; i++) {
// //         int u, v;
// //         cin >> u >> v;
// //         adj[u].push_back(v);
// //         adj[v].push_back(u);
// //     }
// //     int start;
// //     cin >> start;
// //     vector<int> d = BFS(start, adj);
// //     for (int i = 0; i < n; i++) {
// //         cout << start <<"  " << i << "  " << d[i] << endl;
// //     }
// //     return 0;
// // }

// // #############################################################################################

// #include <bits/stdc++.h>
// using namespace std;
// #define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define ll long long 
// #define MP make_pair
// #define sz(v) ((int)(v).size())
// #define OO INT_MAX
// #define rep(i, v) for (int i = 0; i < sz(v); ++i)

// vector<int> BFS2(int s, vector<vector<int>> &adjList) {
//     vector<int> len(sz(adjList), OO);
//     queue<int> q;
//     q.push(s), len[s] = 0;

//     int dep = 0, cur = s, sz = 1;
//     for (; !q.empty(); ++dep, sz = q.size()) {
//         while (sz--) {
//             cur = q.front(), q.pop();
//             rep(i, adjList[cur]) {
//                 if (len[adjList[cur][i]] == OO) {
//                     q.push(adjList[cur][i]);
//                     len[adjList[cur][i]] = dep + 1;
//                 }
//             }
//         }
//     }
//     return len; // cur is the furthest node from s with depth dep
// }

// int main() {
//     IOS;
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> adjList(n);
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
//     int start;
//     cin >> start;
//     vector<int> distances = BFS2(start, adjList);

//     for (int i = 0; i < n; i++) {
//         cout << "Distance from node " << start << " to node " << i << " is " << distances[i] << endl;
//     }

//     return 0;
// }

// // #######################################################################################??


#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define MP make_pair
#define sz(v) ((int)(v).size())
#define OO INT_MAX
#define rep(i, v) for (int i = 0; i < sz(v); ++i)
#define all(v) v.begin(), v.end()

vector<int> BFSPath(int s, int d, vector<vector<int>> &adjList) {
    vector<int> len(sz(adjList), OO);
    vector<int> par(sz(adjList), -1);
    queue<int> q;
    q.push(s), len[s] = 0;

    int dep = 0, cur = s, sz = 1;
    bool ok = true;

    for (; ok && !q.empty(); ++dep, sz = q.size()) {
        while (ok && sz--) {
            cur = q.front(), q.pop();
            rep(i, adjList[cur]) {
                if (len[adjList[cur][i]] == OO) {
                    q.push(adjList[cur][i]);
                    len[adjList[cur][i]] = dep + 1;
                    par[adjList[cur][i]] = cur;

                    if (adjList[cur][i] == d) { // we found target no need to continue
                        ok = false;
                        break;
                    }
                }
            }
        }
    }

    vector<int> path;
    while (d != -1) {
        path.push_back(d);
        d = par[d];
    }

    reverse(all(path));

    return path;
}

int main() {
    IOS;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int start, dest;
    cin >> start >> dest;
    vector<int> path = BFSPath(start, dest, adjList);

    cout << "Path from " << start << " to " << dest << ": ";
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
