/*
 * Problem #3866: First Unique Even Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 20:05:14
 * Link: https://leetcode.com/problems/first-unique-even-element/
 */

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int i = 0;i < nums.size(); i++){
            count[nums[i]]++;
        }
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] % 2 == 0 && count[nums[i]] == 1) return nums[i];
        }
        return -1;
    }
};
