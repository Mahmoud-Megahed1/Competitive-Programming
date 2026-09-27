/**
 * @file Disjoint-Set-Union.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Disjoint Set Union (DSU / Union-Find) with Path Compression and Union by Size/Rank.
 * 
 * Time Complexity:
 * - find(): O(alpha(N)) almost O(1) amortized
 * - unionSets(): O(alpha(N)) almost O(1) amortized
 */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class DSU {
private:
    vector<int> parent;
    vector<int> size;
    int numComponents;

public:
    DSU(int n) : numComponents(n) {
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n + 1, 1);
    }

    // Find with Path Compression
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    // Union by Size
    bool unionSets(int i, int j) {
        int rootI = find(i);
        int rootJ = find(j);

        if (rootI == rootJ)
            return false; // Already in the same set (cycle detected)

        if (size[rootI] < size[rootJ])
            swap(rootI, rootJ);

        parent[rootJ] = rootI;
        size[rootI] += size[rootJ];
        numComponents--;
        return true;
    }

    bool isConnected(int i, int j) {
        return find(i) == find(j);
    }

    int getComponentSize(int i) {
        return size[find(i)];
    }

    int getNumComponents() const {
        return numComponents;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    DSU dsu(5);
    dsu.unionSets(1, 2);
    dsu.unionSets(2, 3);

    cout << "1 and 3 connected: " << (dsu.isConnected(1, 3) ? "YES" : "NO") << "\n";
    cout << "1 and 4 connected: " << (dsu.isConnected(1, 4) ? "YES" : "NO") << "\n";
    cout << "Size of component containing 1: " << dsu.getComponentSize(1) << "\n";
    cout << "Remaining components: " << dsu.getNumComponents() << "\n";

    return 0;
}
