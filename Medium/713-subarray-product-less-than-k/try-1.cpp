/*
 * Problem #713: Subarray Product Less Than K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/10/2025, 22:58:27
 * Link: https://leetcode.com/problems/subarray-product-less-than-k/
 */

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }
        int  i = -1,result = 0;
        long long prod = 1;
        for(int j = 0;j < nums.size();j++){
            prod *= nums[j];
            while(prod >= k){
                i++;
                prod /= nums[i];
            }

            result += j - i;
        }
        return result;
    }
};
