/*
 * Problem #1526: Minimum Number of Increments on Subarrays to Form a Target Array
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/10/2025, 12:34:32
 * Link: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
 */

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int res = target[0];
        for(int i = 1;i < target.size();i++){
            res += max(0,target[i] - target[i-1]);
        }
        return res;
    }
};
