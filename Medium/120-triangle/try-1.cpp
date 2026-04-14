/*
 * Problem #120: Triangle
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/03/2026, 10:05:00
 * Link: https://leetcode.com/problems/triangle/
 */

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 1) return triangle[0][0];
        
        int n = triangle.size();
        
        for(int l = n - 2; l >= 0; l--){
            for(int i = 0;i < triangle[l].size(); i++){
                triangle[l][i] += min(triangle[l + 1][i ], triangle[l + 1][i + 1]);
            }
        }

        return triangle[0][0];

    }
};
