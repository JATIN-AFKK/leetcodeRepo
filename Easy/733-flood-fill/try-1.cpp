/*
 * Problem #733: Flood Fill
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 11:16:44
 * Link: https://leetcode.com/problems/flood-fill/
 */

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();
        int original = image[sr][sc];
        if(color == original) return image;
        
        queue<pair<int, int>> q;
        q.push({sr, sc});
        while(!q.empty()){
            auto [x, y] = q.front();
            q.pop();

            image[x][y] = color;
            vector<pair<int,int>> points = {
                {x, y + 1},
                {x + 1, y},
                {x - 1, y},
                {x, y - 1}
            };
            for(auto [xx, yy] : points){
                if(0 <= xx && xx < n && 0 <= yy && yy < m && image[xx][yy] == original){
                    q.push({xx, yy});
                }
            }
        }
        return image;
    }
};
