/*
 * Problem #452: Minimum Number of Arrows to Burst Balloons
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2025, 11:50:15
 * Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
 */

class Solution {
public:
    bool overlapping(vector<int> a,int curx,int cury){
        int x = max(curx,a[0]);
        int y = min(cury,a[1]);
        if(x <=y) return true;
        else return false;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](auto &a,auto &b){return a[1] < b[1];});
        int count = 0;
        int curx = points[0][0];
        int cury = points[0][1];

        for(int i = 1;i < points.size();i++){
            if(overlapping(points[i],curx,cury)){
                curx = max(curx,points[i][0]);
                cury = min(cury,points[i][1]);
                count++;
            }
            else{
                curx = points[i][0];
                cury = points[i][1];
            }
        }
        return points.size() - count;
    }
};
