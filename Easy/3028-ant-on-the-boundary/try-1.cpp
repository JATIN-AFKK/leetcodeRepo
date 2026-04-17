/*
 * Problem #3028: Ant on the Boundary
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 08:26:10
 * Link: https://leetcode.com/problems/ant-on-the-boundary/
 */

class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int result = 0,sum = 0;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            if(sum == 0){
                result++;
            }
        }
        return result;
    }
};
