/*
 * Problem #435: Non-overlapping Intervals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2025, 11:02:27
 * Link: https://leetcode.com/problems/non-overlapping-intervals/
 */

class Solution {
public:
    bool overlaping(vector<int> vec1,vector<int> vec2){
        int x = max(vec2[0],vec1[0]);
        int y = min(vec2[1],vec1[1]);
        if(x < y){
            return true;
        }
        else return false;

    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){ return a[1] < b[1];});
        int start = 0,count = 0;
        for(int i = 1;i < intervals.size();i++){
            if(overlaping(intervals[i],intervals[start])){
                count++;
                continue;
            }
            else{
                start = i;
            }
        }
        return count;

    }
};
