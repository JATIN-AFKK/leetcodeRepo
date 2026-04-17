/*
 * Problem #2965: Find Missing and Repeated Values
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/03/2025, 13:46:34
 * Link: https://leetcode.com/problems/find-missing-and-repeated-values/
 */

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size(),i,j,n,s1 = 0,s2 = 0;
        for(i = 0;i < size;i++){
            for(j = 0;j < size;j++){
                int num = grid[i][j];  
                int expected = i * size + j + 1;  
                s1 += (expected - num);
                s2 += (expected * expected - num * num);
            }
        }
        return {(s2/s1 - s1)/2,(s2/s1+s1)/2};
    }
};
