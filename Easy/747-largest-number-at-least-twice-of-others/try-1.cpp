/*
 * Problem #747: Largest Number At Least Twice of Others
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 11:07:56
 * Link: https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 */

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = 0,max2 = -1;
        for(int i = 1; i < nums.size();i++){
            if(nums[max1] < nums[i]){
                max2 = max1;
                max1 = i;
            }
            else if(max2 == -1 || nums[max2] < nums[i]){
                max2 = i;
            }
        }
        return nums[max1] >= (nums[max2]*2)? max1:-1;
    }
};
