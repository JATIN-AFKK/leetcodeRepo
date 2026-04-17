/*
 * Problem #238: Product of Array Except Self
 * Difficulty: Medium
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 17:31:51
 * Link: https://leetcode.com/problems/product-of-array-except-self/
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count_zero = 0,prod = 1;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0){
                count_zero++;
            }
            else{
                prod = prod * nums[i];
            }
        }
        if(count_zero > 1){
            vector<int> result(nums.size(),0);
            return result;
        }
        vector<int> result;
        if(count_zero == 1){
            for(int i = 0;i < nums.size();i++){
                if(nums[i] == 0){
                    result.push_back(prod);
                }
                else{
                    result.push_back(0);
                }
            }
        }
        else{
            for(int i = 0;i < nums.size();i++){
                result.push_back(prod/nums[i]);
            }
        }
        return result;

    }
};
