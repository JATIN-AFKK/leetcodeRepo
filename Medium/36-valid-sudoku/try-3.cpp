/*
 * Problem #36: Valid Sudoku
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 21:22:19
 * Link: https://leetcode.com/problems/valid-sudoku/
 */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0;row < board.size();row++){
            unordered_map<char,int> r,c,rb;
            for(int col = 0;col < board.size();col++){
                if(board[row][col] != '.') r[board[row][col]]++;
                if(board[col][row] != '.') c[board[col][row]]++;
                if(r[board[row][col]] > 1 || c[board[col][row]] > 1) {
                    return false;
                }

                int rowb = col / 3 + 3*(row / 3);
                int colb = col % 3 + 3*(row % 3); 
                if(board[rowb][colb] != '.') rb[board[rowb][colb]]++;
                if(rb[board[rowb][colb]] > 1) return false;
            }
        }
        return true;
    }
};
