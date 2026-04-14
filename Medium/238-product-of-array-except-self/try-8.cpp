/*
 * Problem #238: Product of Array Except Self
 * Difficulty: Medium
 * Submission: Try 8
 * status: Accepted
 * Language: cpp
 * Date: 24/03/2026, 11:23:59
 * Link: https://leetcode.com/problems/product-of-array-except-self/
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int current;
        for(int i = 0;i < n; i++){
            if(i == 0) current = 1;
            ans[i] = current;
            current *= nums[i];
        }

         for(int i = n - 1;i >= 0; i--){
            if(i == n - 1) current = 1;
            ans[i] *= current;
            current *= nums[i];
        }
        return ans;
    }
};
