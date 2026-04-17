/*
 * Problem #1292: Maximum Side Length of a Square with Sum Less than or Equal to Threshold
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/10/2025, 23:42:26
 * Link: https://leetcode.com/problems/maximum-side-length-of-a-square-with-sum-less-than-or-equal-to-threshold/
 */

class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int row = mat.size(),col = mat[0].size();
        vector<vector<int>> pre(row+1,vector<int>(col+1,0));
        for(int i = 1;i <= mat.size();i++){
            for(int j = 1;j <= mat[0].size();j++){
                pre[i][j] += pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + mat[i-1][j-1];
            }
        }
        int max_val = 0;
        for(int i = 0;i < mat.size();i++){
            for(int j = 0;j < mat[0].size();j++){
                int mat_size = max(mat.size(),mat[0].size()) + 1;
                for(int k = 0;k < mat_size;k++){
                    if(i+k+1 < pre.size() && j+k+1 < pre[0].size()){
                        int sum = pre[i+k+1][j+k+1] - pre[i+k+1][j] - pre[i][j+k+1] + pre[i][j];  
                        if(sum <= threshold){
                            max_val = max(max_val,k+1);
                        }                  
                    }
                    else{
                        break;
                    }
                }

            }
        }
        return max_val;
    }
};
