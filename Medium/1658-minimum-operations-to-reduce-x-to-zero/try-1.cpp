/*
 * Problem #1658: Minimum Operations to Reduce X to Zero
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 23:52:53
 * Link: https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
 */

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(), nums.end(), 0);

        if(x > total) return -1;
        if(x == total) return nums.size();

        int requiredSum = total - x;

        int sum = 0, l = -1, win = 0;
        for(int e = 0;e < nums.size();e++){
            sum += nums[e];
            while(sum > requiredSum){
                l++;
                sum -= nums[l];
            }
            if(sum == requiredSum) win = max(win, e - l);
        }
        if(win == 0) return -1;
        return nums.size() - win;
    }
};
