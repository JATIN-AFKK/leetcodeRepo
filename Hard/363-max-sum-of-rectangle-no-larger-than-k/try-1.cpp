/*
 * Problem #363: Max Sum of Rectangle No Larger Than K
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/09/2025, 17:22:22
 * Link: https://leetcode.com/problems/max-sum-of-rectangle-no-larger-than-k/
 */

class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k1) {
        int row = matrix.size(),col = matrix[0].size();
        vector<vector<int>> mat(row + 1,vector<int> (col + 1,0));
        for(int i = 1;i <= row;i++){
            for(int j = 1;j <= col;j++){
                mat[i][j] += matrix[i-1][j - 1] + mat[i][j-1] + mat[i - 1][j] - mat[i-1][j-1];
            }
        }
        int result = INT_MIN;
        for(int i = 1;i <= row;i++){
            for(int j = 1;j <= col;j++){
                for(int k = i;k <= row;k++){
                    for(int l = j;l <= col;l++){
                        int sum = mat[k][l] - mat[k][j - 1] - mat[i - 1][l] + mat[i-1][j - 1];
                        if(sum <= k1){
                            result = max(result,sum);
                        }
                    }
                }
            }
        }
        return result;
    }
};
