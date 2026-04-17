/*
 * Problem #3190: Find Minimum Operations to Make All Elements Divisible by Three
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2025, 12:30:43
 * Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
 */

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i , i <nums.size() ;i++){
            if(nums[i] % 3) count++;
        }
        return count;
    }
};
