/*
 * Problem #561: Array Partition
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 11:19:32
 * Link: https://leetcode.com/problems/array-partition/
 */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int ans = 0;
        for(int i = 0; i < nums.size(); i += 2) ans += nums[i];
        return ans;
    }
};
