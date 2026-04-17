/*
 * Problem #1582: Special Positions in a Binary Matrix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/03/2025, 10:15:36
 * Link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
 */

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> top(mat[0].size(),0);
        vector<int> left(mat.size(),0);
        int i,j,c = 0;
        for(i = 0;i<mat.size();i++){
            for(j = 0;j < mat[0].size();j++){
                top[j] += mat[i][j];
                left[i] += mat[i][j];
            }
        }
        for(i = 0;i < left.size();i++){
            for(j = 0;j < top.size();j++){
                if(top[j] == left[i] && top[j] == 1 && mat[i][j] == 1){
                    c++;
                }
            }
        }
        return c;
    }
};
