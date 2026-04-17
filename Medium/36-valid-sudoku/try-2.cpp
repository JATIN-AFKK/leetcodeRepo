/*
 * Problem #36: Valid Sudoku
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 21:19:10
 * Link: https://leetcode.com/problems/valid-sudoku/
 */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0;row < board.size();row++){
            unordered_map<char,int> r,c;
            for(int col = 0;col < board.size();col++){
                if(board[row][col] != '.') r[board[row][col]]++;
                if(board[col][row] != '.') c[board[col][row]]++;
                if(r[board[row][col]] > 1 || c[board[col][row]] > 1) {
                    return false;
                }
            }
        }
        for(int i = 0;i < board.size();i++){
            unordered_map<char,int> r;
            for(int j = 0;j < board.size();j++){
                int row = j / 3 + 3*(i / 3);
                int col = j % 3 + 3*(i % 3); 
                if(board[row][col] != '.') r[board[row][col]]++;
                if(r[board[row][col]] > 1) return false;
            }
        }
        return true;
    }
};
