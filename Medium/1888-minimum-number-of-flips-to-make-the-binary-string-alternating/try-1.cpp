/*
 * Problem #1888: Minimum Number of Flips to Make the Binary String Alternating
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 18:52:56
 * Link: https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/
 */

class Solution {
public:
    int minFlips(string s) {
        int oddZero = 0, evenOne = 0, ans = INT_MAX;

        int l = 0;
        for(int e = 0;e < 2*s.size();e++){
            if(e%2 == 0 && s[e % s.size()] == '0') evenOne++;
            else if(e%2 == 1 && s[e % s.size()] == '1') oddZero++;

            if(e - l + 1 < s.size()) continue;

            ans = min(ans, evenOne + oddZero);
            ans = min(ans, (int)s.size() - evenOne - oddZero);

            if(l%2 == 0 && s[l % s.size()] == '0') evenOne--;
            else if(l%2 == 1 && s[l % s.size()] == '1') oddZero--;
            l++;
        }
        return ans;
    }
};
