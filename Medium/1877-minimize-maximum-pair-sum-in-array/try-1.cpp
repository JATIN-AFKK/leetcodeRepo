/*
 * Problem #1877: Minimize Maximum Pair Sum in Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 18:48:32
 * Link: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
 */

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int ans = INT_MIN;
        while(l < r){
            ans = max(nums[l] + nums[r], ans);
            l++;
            r--;
        }
        return ans;
    }
};
