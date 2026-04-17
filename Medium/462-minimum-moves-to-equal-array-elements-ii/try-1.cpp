/*
 * Problem #462: Minimum Moves to Equal Array Elements II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 23:24:22
 * Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
 */

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int median;
        if(n%2 == 1) median = nums[n/2];
        else median = (nums[n/2] + nums[n/2 - 1])/2;

        int ans = 0;
        for(int i = 0;i < n; i++){
            ans += abs(nums[i] - median);
        }
        return ans;
    }
};
