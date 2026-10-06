# Dynamic Array

- **Problem Link:** [HackerRank - Dynamic Array](https://www.hackerrank.com/challenges/dynamic-array/problem)
- **Language:** C++

## Approach
Maintain a 2D vector `arr` containing $N$ empty dynamic arrays and track integer `lastAnswer = 0`. For each query, calculate the targeted sequence index `idx = (x ^ lastAnswer) % n`. Append $y$ to `arr[idx]` for Type 1 queries, or update `lastAnswer = arr[idx][y % arr[idx].size()]` and append to output answers for Type 2 queries.

## Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N + Q)$ total time ($\mathcal{O}(1)$ amortized per query).
- **Space Complexity:** $\mathcal{O}(N + Q)$ space for 2D vector sequence elements and answers.
