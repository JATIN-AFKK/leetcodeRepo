/*
 * Problem #435: Non-overlapping Intervals
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2025, 12:01:02
 * Link: https://leetcode.com/problems/non-overlapping-intervals/
 */

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){ return a[1] < b[1];});
        int count = 0,end = intervals[0][1];
        for(int i = 1;i < intervals.size();i++){
            if(end > intervals[i][0]){
                count++;
            }
            else{
                end = intervals[i][1];
            }
        }
        return count;

    }
};
