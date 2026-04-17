/*
 * Problem #1018: Binary Prefix Divisible By 5
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 19:11:26
 * Link: https://leetcode.com/problems/binary-prefix-divisible-by-5/
 */

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int rem = 0;
        for(int i = 0;i < nums.size();i++){
            rem = (2*rem + nums[i])%5;
            if(rem) result.push_back(false);
            else result.push_back(true);
        }
        return result;
    }
};
