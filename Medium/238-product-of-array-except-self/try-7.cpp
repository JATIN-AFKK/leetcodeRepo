/*
 * Problem #238: Product of Array Except Self
 * Difficulty: Medium
 * Submission: Try 7
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2025, 19:59:50
 * Link: https://leetcode.com/problems/product-of-array-except-self/
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(),1), suf(nums.size(), 1);
        vector<int> result;
        for(int i = 1;i < nums.size() ;i++){
            pre[i] *= pre[i-1]*nums[i-1];
            suf[nums.size() - 1 - i] *= suf[nums.size() - i] * nums[nums.size() - i];
        }
        for(int i = 0;i < nums.size();i++){
            result.push_back(pre[i] * suf[i]);
        }
        return result;

    }
};
