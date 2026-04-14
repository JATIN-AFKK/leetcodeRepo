/*
 * Problem #486: Predict the Winner
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/03/2026, 08:23:42
 * Link: https://leetcode.com/problems/predict-the-winner/
 */

class Solution {
public:
    int dp[21][21];
    int minmax(vector<int> arr, int l , int r){
        if(l == r) return arr[l];
        if(dp[l][r] != -1) return dp[l][r];
        int left = arr[l] - minmax(arr, l + 1, r);
        int right = arr[r] - minmax(arr, l, r - 1);
        dp[l][r] = max(left, right);
        return max(left, right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return minmax(nums, 0, n - 1) >= 0;
    }
};
