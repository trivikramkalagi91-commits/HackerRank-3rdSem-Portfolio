# Time Conversion

- **Problem Link:** [HackerRank - Time Conversion](https://www.hackerrank.com/challenges/time-conversion/problem)
- **Language:** C++

## Approach
Parse fixed 12-hour time string `hh:mm:ssAM/PM`. Extract `hh`, `mm`, `ss`, and period `AM`/`PM`. Convert 12-hour format to 24-hour format by mapping `12:xx:xxAM` to `00:xx:xx` and adding 12 to PM hours (except `12:xx:xxPM`). Output formatted 2-digit zero-padded string `hh:mm:ss`.

## Complexity Analysis
- **Time Complexity:** $\mathcal{O}(1)$ constant execution time.
- **Space Complexity:** $\mathcal{O}(1)$ constant space.
