# Sparse Arrays

- **Problem Link:** [HackerRank - Sparse Arrays](https://www.hackerrank.com/challenges/sparse-arrays/problem)
- **Language:** C++

## Approach
Populate a hash map (`std::unordered_map<string, int>`) with occurrence frequencies of input strings in $\mathcal{O}(N)$ time. For each query string, perform an $\mathcal{O}(1)$ average time hash lookup and append frequency count to the result vector.

## Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N + Q)$ total time ($N$ input strings, $Q$ queries).
- **Space Complexity:** $\mathcal{O}(N)$ auxiliary space for storing frequency map.
