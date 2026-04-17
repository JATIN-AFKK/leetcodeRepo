/*
 * Problem #1512: Number of Good Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 17:17:28
 * Link: https://leetcode.com/problems/number-of-good-pairs/
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int ele : nums) count[ele]++;

        int result = 0;
        for(int i = 1;i < 101;i++) result += (count[i]*(count[i] - 1))/2;
        return result;
    }
};
