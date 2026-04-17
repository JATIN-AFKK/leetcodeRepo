/*
 * Problem #3468: Find the Number of Copy Arrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2025, 21:27:01
 * Link: https://leetcode.com/problems/find-the-number-of-copy-arrays/
 */

class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int i,difference,lower = bounds[0][0],upper = bounds[0][1];
        for(i = 1;i<original.size();i++){
            difference = original[i]-original[i-1];
            lower = max(lower + difference,bounds[i][0]);
            upper = min(bounds[i][1],upper+difference);
            if(upper<lower){
                return 0;
            }
        }
        return (upper - lower + 1);
    }
};
