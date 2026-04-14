/*
 * Problem #1493: Longest Subarray of 1's After Deleting One Element
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 23:13:46
 * Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
 */

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = -1, zeros = 0, ans = 0;
        for(int e = 0;e < nums.size();e++){
            if(nums[e] == 0) zeros++;

            while(zeros > 1){
                l++;
                if(nums[l] == 0) zeros--;
            }

            ans = max(ans, e - l - 1);
        }
        return ans;
    }
};
