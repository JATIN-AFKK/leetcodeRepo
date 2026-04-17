/*
 * Problem #3427: Sum of Variable Length Subarrays
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 16:26:33
 * Link: https://leetcode.com/problems/sum-of-variable-length-subarrays/
 */

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int count = nums[0];
        for(int i = 1;i < nums.size();i++){
            int start = max(0,i-nums[i]);
            nums[i] += nums[i-1];
            if(start == 0){
                count += nums[i];
            }
            else{
                count += nums[i] - nums[start-1];
            }
        }
        return count;
    }
};
