/*
 * Problem #152: Maximum Product Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2025, 18:17:40
 * Link: https://leetcode.com/problems/maximum-product-subarray/
 */

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr = nums[0];
        int cmin = nums[0];
        int maxp = nums[0];
        for(int i = 1;i<nums.size();i++){
            if (nums[i]<0){
                swap(curr,cmin);
            }
            cmin = min(cmin*nums[i],nums[i]);
            curr = max(nums[i],curr*nums[i]);
            maxp = max(maxp,curr);
        }
        return maxp;
    }
};
