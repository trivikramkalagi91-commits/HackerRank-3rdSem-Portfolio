/*
 * Problem: Diagonal Difference
 * HackerRank URL: https://www.hackerrank.com/challenges/diagonal-difference/problem
 * Language: C++
 *
 * Approach:
 * Iterate through the N x N matrix with a single loop from 0 to N-1.
 * Sum elements on the primary diagonal at arr[i][i] and elements
 * on the secondary diagonal at arr[i][n - 1 - i].
 * Finally, return the absolute difference between primary and secondary sums.
 *
 * Complexity:
 * - Time Complexity: O(N) for diagonal summation (where N is matrix dimension)
 * - Space Complexity: O(1) auxiliary space
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int diagonalDifference(const vector<vector<int>>& arr) {
    int n = arr.size();
    int primary_sum = 0;
    int secondary_sum = 0;

    // Single loop to traverse both primary and secondary diagonals simultaneously
    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];             // Primary diagonal (top-left to bottom-right)
        secondary_sum += arr[i][n - 1 - i];   // Secondary diagonal (top-right to bottom-left)
    }

    return abs(primary_sum - secondary_sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr) << "\n";
    return 0;
}
