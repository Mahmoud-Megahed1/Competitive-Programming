/**
 * @file Difference-Array.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Range Update in O(1) and Prefix Sum Query in O(N).
 * 
 * Classic archetype:
 * - Codeforces 816B: Karen and Coffee (Rating 1400)
 * - Allows multiple interval updates [l, r] with value +v in O(1) per update,
 *   followed by a single prefix sum sweep in O(N) to reconstruct the final array.
 */

#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 200005;

// Difference array and prefix sum containers
int diff[MAXN];
int pref[MAXN];

// Add value 'val' to all elements in range [l, r] in O(1)
void updateRange(int l, int r, int val) {
    diff[l] += val;
    diff[r + 1] -= val;
}

// Reconstruct original values and build query prefix sums
void build(int n, int threshold = 1) {
    int current = 0;
    for (int i = 1; i <= n; ++i) {
        current += diff[i];
        // If current count meets threshold (e.g. k recipes in Karen and Coffee)
        pref[i] = pref[i - 1] + (current >= threshold ? 1 : 0);
    }
}

// Query count of valid elements in range [l, r] in O(1)
int query(int l, int r) {
    if (l > r) return 0;
    return pref[r] - pref[l - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 10; // Array size
    // Apply range updates
    updateRange(2, 6, 1);
    updateRange(4, 8, 1);
    updateRange(1, 4, 1);

    build(n, 2); // Count points covered at least 2 times

    cout << "Points with >= 2 overlap in [3, 7]: " << query(3, 7) << "\n";
    cout << "Points with >= 2 overlap in [1, 2]: " << query(1, 2) << "\n";

    return 0;
}
