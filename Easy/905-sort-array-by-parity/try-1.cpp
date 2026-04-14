/*
 * Problem #905: Sort Array By Parity
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 11:24:29
 * Link: https://leetcode.com/problems/sort-array-by-parity/
 */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = -1;
        for(int j = 0;j < nums.size(); j++){
            if(nums[j] % 2 == 0){
                swap(nums[j], nums[++i]);
            }
        }
        return nums;
    }
};
