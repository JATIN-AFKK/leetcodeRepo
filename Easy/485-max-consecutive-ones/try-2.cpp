/*
 * Problem #485: Max Consecutive Ones
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 18:23:08
 * Link: https://leetcode.com/problems/max-consecutive-ones/
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_val = 0, cur = 0;
        for(int ele : nums){
            if(ele == 1) cur++;
            else{
                max_val = max(max_val, cur);
                cur = 0;
            }
        }
        max_val = max(max_val, cur);
        return max_val;

    }
};
