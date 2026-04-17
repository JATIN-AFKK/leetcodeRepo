/*
 * Problem #3432: Count Partitions with Even Sum Difference
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 16:47:49
 * Link: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
 */

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        for(int i = 1;i < nums.size();i++){
            nums[i] += nums[i-1]; 
        }
        for(int i = 0;i < nums.size()-1;i++){
            if((nums[i] - nums[nums.size()-1] + nums[i]) % 2 == 0){
                count++;
            }
        }
        return count;
    }
};
