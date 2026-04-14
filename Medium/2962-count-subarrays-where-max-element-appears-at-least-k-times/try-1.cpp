/*
 * Problem #2962: Count Subarrays Where Max Element Appears at Least K Times
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 23:41:10
 * Link: https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/
 */

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElement = *max_element(nums.begin(), nums.end()), freq = 0;
        long long ans = 0;

        int l = 0;
        for(int e = 0;e < nums.size(); e++){
            if(nums[e] == maxElement) freq++;

            while(freq == k){
                ans += (nums.size() - e);
                if(nums[l] == maxElement) freq--;
                l++;
            }
        }
        return ans;
    }
};
