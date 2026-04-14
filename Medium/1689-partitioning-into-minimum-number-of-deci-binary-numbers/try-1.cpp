/*
 * Problem #1689: Partitioning Into Minimum Number Of Deci-Binary Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 09:25:10
 * Link: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
 */

class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(char ch : n) ans = max(ans ,ch - '0');
        return ans;
    }
};
