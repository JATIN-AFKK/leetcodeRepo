/*
 * Problem #1991: Find the Middle Index in Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 19:19:01
 * Link: https://leetcode.com/problems/find-the-middle-index-in-array/
 */

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i = 1;i < nums.size();i++){
            nums[i] += nums[i - 1];
        }
        int sum = 0;
        for(int i = 0; i <nums.size();i++){
            if(sum == nums[nums.size()-1] - nums[i]){
                return i;
            }
            sum = nums[i];
        }
        return -1;
    }
};
