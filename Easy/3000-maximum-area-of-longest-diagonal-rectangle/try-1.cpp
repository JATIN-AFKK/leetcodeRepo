/*
 * Problem #3000: Maximum Area of Longest Diagonal Rectangle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 22:12:57
 * Link: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
 */

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_hy = 0,max_area = 0;
        for(int i = 0;i < dimensions.size();i++){
            if(max_hy < dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1]){
                max_hy = dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1];
                max_area = dimensions[i][0]*dimensions[i][1];
            }
            else if(max_hy == dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1]){
                max_area = max(max_area,dimensions[i][0]*dimensions[i][1]);
            }
        }
        return max_area;
    }
};
