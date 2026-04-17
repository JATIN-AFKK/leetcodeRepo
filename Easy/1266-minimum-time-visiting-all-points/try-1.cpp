/*
 * Problem #1266: Minimum Time Visiting All Points
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/01/2026, 10:10:03
 * Link: https://leetcode.com/problems/minimum-time-visiting-all-points/
 */

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for(int i = 1;i < points.size(); i++){
            time += max(abs(points[i][0] - points[i-1][0]), abs(points[i][1] - points[i-1][1]));
        }
        return time;
    }
};
