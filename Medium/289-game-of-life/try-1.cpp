/*
 * Problem #289: Game of Life
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 11:47:41
 * Link: https://leetcode.com/problems/game-of-life/
 */

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                int count = 0;
                for(int x = -1; x <= 1; x++){
                    for(int y = -1; y <= 1; y++){
                        int ix = i + x, jy = j + y;
                        if(x == 0 && y == 0) continue;
                        if(ix < 0 || jy < 0 || ix >= n || jy >= m) continue;

                        if(board[ix][jy] == 1) count++;
                    }
                }
                if(board[i][j] == 1){
                    if(count < 2) ans[i][j] = 0;
                    else if(count == 2 || count == 3) ans[i][j] = 1;
                    else ans[i][j] = 0; 
                }
                else{
                    if(count == 3) ans[i][j] = 1;
                }
            }
        }
        board = ans;
    }
};
