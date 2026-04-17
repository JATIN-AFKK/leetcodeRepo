/*
 * Problem #1913: Maximum Product Difference Between Two Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/08/2025, 11:04:21
 * Link: https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
 */

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1 = 0,max2 = 0,min1 = INT_MAX,min2 = INT_MAX;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > max1){
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2){
                max2 = nums[i];
            }

            if(min1 > nums[i]){
                min2 = min1;
                min1 = nums[i];
            }
            else if(min2 > nums[i]){
                min2 = nums[i];
            }

        }
        return max1*max2 - min1*min2;
    }
};
