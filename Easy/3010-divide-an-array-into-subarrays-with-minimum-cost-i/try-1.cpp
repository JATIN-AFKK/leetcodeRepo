/*
 * Problem #3010: Divide an Array Into Subarrays With Minimum Cost I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 12:22:43
 * Link: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
 */

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int m1 = INT_MAX, m2 = INT_MAX;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] <= m1){
                m2 = m1;
                m1 = nums[i];
            }
            else if(nums[i] < m2){
                m2 = nums[i];
            }
        }
        return nums[0] + m1 + m2;
    }
};
