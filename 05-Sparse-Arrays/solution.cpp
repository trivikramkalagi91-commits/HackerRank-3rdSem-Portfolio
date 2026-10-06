/*
 * Problem: Sparse Arrays
 * HackerRank URL: https://www.hackerrank.com/challenges/sparse-arrays/problem
 * Language: C++
 *
 * Approach:
 * Build a frequency map (unordered_map<string, int>) from input stringList.
 * For each query in `queries`, lookup frequency in hash table in O(1) average time.
 * Store matched counts in a result vector and return.
 *
 * Complexity:
 * - Time Complexity: O(N + Q) where N is number of strings and Q is number of queries
 * - Space Complexity: O(N) auxiliary space for frequency hash table
 */

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> matchingStrings(const vector<string>& stringList, const vector<string>& queries) {
    unordered_map<string, int> freq;
    for (const auto& str : stringList) {
        freq[str]++;
    }

    vector<int> result;
    result.reserve(queries.size());
    for (const auto& q : queries) {
        auto it = freq.find(q);
        if (it != freq.end()) {
            result.push_back(it->second);
        } else {
            result.push_back(0);
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    vector<string> stringList(n);
    for (int i = 0; i < n; i++) cin >> stringList[i];

    int q;
    if (!(cin >> q)) return 0;
    vector<string> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];

    vector<int> result = matchingStrings(stringList, queries);
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }

    return 0;
}
