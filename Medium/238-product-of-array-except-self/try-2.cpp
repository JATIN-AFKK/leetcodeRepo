/*
 * Problem #238: Product of Array Except Self
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2024, 19:26:14
 * Link: https://leetcode.com/problems/product-of-array-except-self/
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pr = 1, pr1;

        vector<int> ans;
        for (auto n : nums) {
            pr = pr * n;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) 
            {
                ans.push_back(pr / nums[i]);
            } 
            else 
            {
                pr1 = 1;
                for (int j = 0; j < nums.size(); j++) 
                {
                    if (i != j) 
                    {
                        pr1 = pr1 * nums[j];
                    }
                }
                ans.push_back(pr1);
            }
        }
        return ans;
    }
};
