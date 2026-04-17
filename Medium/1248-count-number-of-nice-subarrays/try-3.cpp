/*
 * Problem #1248: Count Number of Nice Subarrays
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 12:22:27
 * Link: https://leetcode.com/problems/count-number-of-nice-subarrays/
 */

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
    }
    int atmost(vector<int> nums,int k){
        if(k < 0) return 0;
        int left = 0, odd = 0, count = 0;
        for(int right = 0;right < nums.size();right++){
            if(nums[right]%2) odd++;
            while(odd > k){
                if(nums[left]%2) odd--;
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
};
