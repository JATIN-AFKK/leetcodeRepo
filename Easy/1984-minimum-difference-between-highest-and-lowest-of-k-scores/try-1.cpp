/*
 * Problem #1984: Minimum Difference Between Highest and Lowest of K Scores
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 19:02:47
 * Link: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
 */

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1) return 0;
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        for(int i = 0;i < nums.size() - k + 1;i++){
            ans = min(ans, nums[k + i - 1] - nums[i]);
        }
        return ans;
    }
};
