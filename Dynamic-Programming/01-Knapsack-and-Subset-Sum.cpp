/**
 * @file 01-Knapsack-and-Subset-Sum.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Dynamic Programming core patterns: 0/1 Knapsack, Space-Optimized 1D DP, and Subset Sum.
 * 
 * Relevant to Codeforces problems:
 * - 1950D: Product of Binary Decimals (DP reachability state)
 * - 1829D: Gold Rush (DP / Memoized recursion over transformation paths)
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. Classical 0/1 Knapsack with 1D Memory Optimization O(N * W) time, O(W) space
int knapsack01(int W, const vector<int>& weights, const vector<int>& values) {
    int n = weights.size();
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; ++i) {
        // Iterate backwards to ensure each item is used at most once
        for (int w = W; w >= weights[i]; --w) {
            dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
        }
    }
    return dp[W];
}

// 2. Subset Sum / Reachability DP
bool isSubsetSum(const vector<int>& arr, int target) {
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int num : arr) {
        for (int s = target; s >= num; --s) {
            if (dp[s - num]) {
                dp[s] = true;
            }
        }
    }
    return dp[target];
}

// 3. Longest Common Subsequence (LCS) O(N * M)
int longestCommonSubsequence(const string& s1, const string& s2) {
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> weights = {2, 3, 4, 5};
    vector<int> values = {3, 4, 5, 6};
    int capacity = 5;

    cout << "Max 0/1 Knapsack Value: " << knapsack01(capacity, weights, values) << "\n";

    vector<int> nums = {3, 34, 4, 12, 5, 2};
    cout << "Can form sum 9: " << (isSubsetSum(nums, 9) ? "YES" : "NO") << "\n";
    cout << "Can form sum 30: " << (isSubsetSum(nums, 30) ? "YES" : "NO") << "\n";

    return 0;
}
