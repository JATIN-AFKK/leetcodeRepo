/*
 * Problem #812: Largest Triangle Area
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 11:45:57
 * Link: https://leetcode.com/problems/largest-triangle-area/
 */

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0;
        for(int i = 0;i < points.size();i++){
            for(int j = 0;j < i;j++){
                for(int k = 0;k<j;k++){
                    double x1 = points[i][0], y1 = points[i][1];
                    double x2 = points[j][0], y2 = points[j][1];
                    double x3 = points[k][0], y3 = points[k][1];
                    double area = fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0;

                    maxArea = max(maxArea, area);
                }
            }
        
        }
        return maxArea;
    }
};
