/*
 * Problem: Compare the Triplets
 * HackerRank URL: https://www.hackerrank.com/challenges/compare-the-triplets/problem
 * Language: C++
 *
 * Approach:
 * Iterate through 3 categories comparing Alice's rating a[i] and Bob's rating b[i]:
 * - If a[i] > b[i], award 1 point to Alice.
 * - If a[i] < b[i], award 1 point to Bob.
 * - If a[i] == b[i], neither receives a point.
 * Return vector containing {alice_score, bob_score}.
 *
 * Complexity:
 * - Time Complexity: O(1) constant time (exactly 3 element comparisons)
 * - Space Complexity: O(1) constant space
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(const vector<int>& a, const vector<int>& b) {
    int alice_score = 0;
    int bob_score = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice_score++;
        } else if (a[i] < b[i]) {
            bob_score++;
        }
    }

    return {alice_score, bob_score};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];

    vector<int> result = compareTriplets(a, b);
    cout << result[0] << " " << result[1] << "\n";

    return 0;
}
