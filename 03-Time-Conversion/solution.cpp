/*
 * Problem: Time Conversion
 * HackerRank URL: https://www.hackerrank.com/challenges/time-conversion/problem
 * Language: C++
 *
 * Approach:
 * Parse 12-hour formatted time string hh:mm:ssAM/PM.
 * Extract hours, minutes, seconds, and period modifier ("AM" or "PM").
 * - If period is "AM" and hour is 12, reset hour to 0 (midnight 00).
 * - If period is "PM" and hour is not 12, add 12 to hour (afternoon 13-23).
 * Format converted hour back to 2-digit zero-padded string "hh:mm:ss".
 *
 * Complexity:
 * - Time Complexity: O(1) constant execution time
 * - Space Complexity: O(1) constant auxiliary space
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string timeConversion(string s) {
    string period = s.substr(8, 2);
    int hh = stoi(s.substr(0, 2));
    string mm = s.substr(3, 2);
    string ss = s.substr(6, 2);

    if (period == "AM") {
        if (hh == 12) {
            hh = 0; // Midnight 12:00:00AM -> 00:00:00
        }
    } else {
        if (hh != 12) {
            hh += 12; // Afternoon PM conversion (e.g., 01:00:00PM -> 13:00:00)
        }
    }

    stringstream ss_out;
    ss_out << setfill('0') << setw(2) << hh << ":" << mm << ":" << ss;
    return ss_out.str();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        cout << timeConversion(s) << "\n";
    }

    return 0;
}
