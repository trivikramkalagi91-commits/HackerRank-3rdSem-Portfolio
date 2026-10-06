/*
 * Problem: Dynamic Array
 * HackerRank URL: https://www.hackerrank.com/challenges/dynamic-array/problem
 * Language: C++
 *
 * Approach:
 * Maintain a 2D vector `arr` containing N dynamic 1D arrays initialized empty.
 * Track `lastAnswer` initialized to 0. Process Q queries sequentially:
 * - Compute targeted sequence index using bitwise XOR: idx = (x ^ lastAnswer) % n.
 * - Type 1 query (1 x y): Append y to arr[idx].
 * - Type 2 query (2 x y): Find element at (y % arr[idx].size()), update lastAnswer, and record it.
 *
 * Complexity:
 * - Time Complexity: O(N + Q) where Q is the number of queries
 * - Space Complexity: O(N + Q) space for storing sequence elements and answers
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> dynamicArray(int n, const vector<vector<int>>& queries) {
    vector<vector<int>> arr(n);
    int lastAnswer = 0;
    vector<int> answers;

    for (const auto& q : queries) {
        int qtype = q[0];
        int x = q[1];
        int y = q[2];

        // Determine array index using bitwise XOR
        int idx = (x ^ lastAnswer) % n;

        if (qtype == 1) {
            // Append y to sequence arr[idx]
            arr[idx].push_back(y);
        } else if (qtype == 2) {
            // Retrieve value from arr[idx] at 0-indexed position (y % size)
            int element_idx = y % arr[idx].size();
            lastAnswer = arr[idx][element_idx];
            answers.push_back(lastAnswer);
        }
    }

    return answers;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    vector<int> result = dynamicArray(n, queries);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }

    return 0;
}
