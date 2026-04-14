/*
 * Problem #2447: Number of Subarrays With GCD Equal to K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 18:50:13
 * Link: https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k/
 */

class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0;i < nums.size(); i++){
            int gc = nums[i];
            for(int j = i;j < nums.size(); j++){
                gc = gcd(gc, nums[j]);
                if(gc == k) count++;
            }
        }
        return count;
    }
};
