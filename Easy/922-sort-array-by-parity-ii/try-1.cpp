/*
 * Problem #922: Sort Array By Parity II
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 11:31:19
 * Link: https://leetcode.com/problems/sort-array-by-parity-ii/
 */

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while(true){
            while(i < nums.size() && nums[i] % 2 == 0) i += 2;
            while(j < nums.size() && nums[j] % 2 == 1) j += 2;

            if(i >= nums.size() || j >= nums.size()) break;
            swap(nums[i], nums[j]);
            

        }
        return nums;
    }
};
