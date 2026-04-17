/*
 * Problem #485: Max Consecutive Ones
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2025, 15:29:08
 * Link: https://leetcode.com/problems/max-consecutive-ones/
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0,count = 0;
        for(auto i : nums){
            if(i == 1){
                count++;
            }

            else{
                maxCount = max(maxCount,count);
                count = 0;
            }
        }
        maxCount = max(maxCount,count);
        return maxCount;


    }
};
