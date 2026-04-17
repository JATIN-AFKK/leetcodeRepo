/*
 * Problem #3427: Sum of Variable Length Subarrays
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 16:22:26
 * Link: https://leetcode.com/problems/sum-of-variable-length-subarrays/
 */

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(nums[0]);
        int count = 0;
        for(int i = 1;i < nums.size();i++) prefix.push_back(prefix[i-1] + nums[i]);
        for(int i = 0;i < nums.size();i++){
            int start = max(0,i-nums[i]);
            if(start == 0){
                count += prefix[i];
            }
            else{
                count += prefix[i] - prefix[start-1];
            }
        }
        return count;
    }
};
