/*
 * Problem #304: Range Sum Query 2D - Immutable
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/03/2025, 17:13:08
 * Link: https://leetcode.com/problems/range-sum-query-2d-immutable/
 */

class NumMatrix {
public:
    vector<vector<int>> store;
    NumMatrix(vector<vector<int>>& matrix) {
        store.resize(matrix.size() + 1,vector<int>(matrix[0].size() + 1,0));
        int i,j;
        for(i = 1;i < matrix.size()+1;i++){
            for(j = 1;j < matrix[0].size()+1;j++){
                store[i][j] = store[i - 1][j] + store[i][j - 1] - store[i - 1][j - 1] + matrix[i-1][j - 1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return store[row2 + 1][col2 + 1] - store[row1][col2+1] - store[row2 + 1][col1] + store[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
