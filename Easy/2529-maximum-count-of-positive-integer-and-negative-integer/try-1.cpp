/*
 * Problem #2529: Maximum Count of Positive Integer and Negative Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 18:29:03
 * Link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
 */

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p = 0, n = 0;
        for(int num : nums){
            p += (num > 0);
            n += (num < 0);
        }
        return max(p,n);
    }
};
