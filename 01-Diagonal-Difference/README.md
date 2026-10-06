# Diagonal Difference

- **Problem Link:** [HackerRank - Diagonal Difference](https://www.hackerrank.com/challenges/diagonal-difference/problem)
- **Language:** C++

## Approach
Iterate through the $N \times N$ matrix using a single loop index $i$ from $0$ to $N-1$. Simultaneously accumulate elements $arr[i][i]$ for the primary diagonal and $arr[i][N - 1 - i]$ for the secondary diagonal, then return the absolute difference `abs(primary_sum - secondary_sum)`.

## Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ for diagonal traversal (or $\mathcal{O}(N^2)$ for matrix I/O).
- **Space Complexity:** $\mathcal{O}(1)$ auxiliary space.
