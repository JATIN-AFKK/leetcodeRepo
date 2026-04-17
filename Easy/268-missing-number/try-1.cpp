/*
 * Problem #268: Missing Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 21:24:04
 * Link: https://leetcode.com/problems/missing-number/
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long int sum = 0,upper = nums.size();
        for(int i : nums){
            sum += i;
        }
        return  ((upper)*(upper+1))/2 - sum;
    }
};
