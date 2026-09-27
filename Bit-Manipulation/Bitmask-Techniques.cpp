/**
 * @file Bitmask-Techniques.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Essential Bit Manipulation & Bitmask State Compression for Competitive Programming.
 * 
 * Relevant to Codeforces problems:
 * - 1829C: Mr. Perfectly Fine (Bitmask state representation)
 * - 1915B: Not Quite Latin Square (Bitwise XOR / uniqueness properties)
 * - 2020A: Find Minimum Operations (Base conversion & bit shifting)
 */

#include <iostream>
#include <vector>

using namespace std;

// Check if k-th bit is set (0-indexed)
bool isBitSet(int mask, int k) {
    return (mask & (1 << k)) != 0;
}

// Set k-th bit
int setBit(int mask, int k) {
    return mask | (1 << k);
}

// Clear k-th bit
int clearBit(int mask, int k) {
    return mask & ~(1 << k);
}

// Toggle k-th bit
int toggleBit(int mask, int k) {
    return mask ^ (1 << k);
}

// Count number of set bits (popcount)
int countSetBits(int mask) {
    return __builtin_popcount(mask);
}

// Iterate through all 2^N subsets of a set of size N
void generateAllSubsets(const vector<int>& elements) {
    int n = elements.size();
    int totalSubsets = 1 << n;

    for (int mask = 0; mask < totalSubsets; ++mask) {
        cout << "Subset [mask " << mask << "]: { ";
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                cout << elements[i] << " ";
            }
        }
        cout << "}\n";
    }
}

// Iterate through all submasks of a given mask in O(3^N) total across all masks
void iterateSubmasks(int mask) {
    cout << "Submasks of " << mask << ":\n";
    for (int sub = mask; ; sub = (sub - 1) & mask) {
        cout << "  " << sub << "\n";
        if (sub == 0) break;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mask = 0;
    mask = setBit(mask, 0); // Skill 1 acquired
    mask = setBit(mask, 1); // Skill 2 acquired

    cout << "Mask: " << mask << " (Both skills active: " << (mask == 3 ? "YES" : "NO") << ")\n";

    vector<int> items = {10, 20, 30};
    generateAllSubsets(items);

    return 0;
}
