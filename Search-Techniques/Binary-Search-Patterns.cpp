/**
 * @file Binary-Search-Patterns.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Essential Binary Search patterns for Competitive Programming:
 * 
 * 1. Monotonic Predicate / Binary Search on Answer (e.g., Codeforces 1873E - Building an Aquarium)
 * 2. Custom Lower Bound & Upper Bound implementations
 * 3. Two Pointers / Sliding Window technique
 */

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Pattern 1: Binary Search on Monotonic Answer
// Problem archetype: Find maximum/minimum value X satisfying a boolean condition check(X)
bool check(long long mid, const vector<long long>& a, long long maxLimit) {
    long long required = 0;
    for (long long x : a) {
        if (mid > x) {
            required += (mid - x);
            if (required > maxLimit) return false;
        }
    }
    return required <= maxLimit;
}

long long binarySearchOnAnswer(const vector<long long>& a, long long maxLimit) {
    long long low = 1, high = 2e9 + 7;
    long long best = 1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, a, maxLimit)) {
            best = mid;     // mid is feasible, try for larger
            low = mid + 1;
        } else {
            high = mid - 1; // infeasible, try smaller
        }
    }
    return best;
}

// Pattern 2: Custom Lower Bound implementation (First index where arr[i] >= target)
int customLowerBound(const vector<int>& arr, int target) {
    int low = 0, high = (int)arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

// Pattern 3: Two Pointers (e.g. finding pair with target sum in sorted array)
bool hasPairWithSum(const vector<int>& sortedArr, int target) {
    int left = 0;
    int right = (int)sortedArr.size() - 1;

    while (left < right) {
        int currentSum = sortedArr[left] + sortedArr[right];
        if (currentSum == target) {
            return true;
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> sortedArr = {1, 3, 5, 7, 9, 11, 15};
    int target = 7;
    int idx = customLowerBound(sortedArr, target);
    cout << "Lower bound for " << target << " found at index: " << idx << " (value: " << sortedArr[idx] << ")\n";

    bool exists = hasPairWithSum(sortedArr, 16);
    cout << "Pair with sum 16 exists: " << (exists ? "YES" : "NO") << "\n";

    return 0;
}
