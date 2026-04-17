/*
 * Problem #452: Minimum Number of Arrows to Burst Balloons
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2025, 11:56:48
 * Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
 */

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](auto &a,auto &b){return a[1] < b[1];});
        int num_Arror = 1;
        int end = points[0][1];
        for(int i = 1;i < points.size();i++){
           if(points[i][0] > end){
            num_Arror++;
            end = points[i][1];
           }
        }
        return num_Arror;
    }
};
