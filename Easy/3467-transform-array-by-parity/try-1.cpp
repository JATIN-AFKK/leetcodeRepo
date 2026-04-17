/*
 * Problem #3467: Transform Array by Parity
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2025, 21:15:47
 * Link: https://leetcode.com/problems/transform-array-by-parity/
 */

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int i = -1,j;
        for(j = 0;j<nums.size();j++){
            if(nums[j] % 2 == 0){
                swap(nums[i+1],nums[j]);
                i++;
                nums[i] = 0;
            }
            else{
                nums[j] = 1;
            }
        }
        return nums;
    }
};
