/*
 * Problem #3439: Reschedule Meetings for Maximum Free Time I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 16:30:56
 * Link: https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-i/
 */

class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int l = 0, ans = 0, curFreeTime = 0;
        for(int e = 0;e < startTime.size(); e++){
            //update the free time
            if(e == 0) curFreeTime += startTime[e] - 0;
            else curFreeTime += startTime[e] - endTime[e - 1];

            if(e - l + 1 > k){
                //shrinking
                if(l == 0) curFreeTime -= startTime[l] - 0;
                else curFreeTime -= startTime[l] - endTime[l - 1];
                l++;
            }
            if(e != startTime.size() - 1) ans = max(ans, curFreeTime + (startTime[e + 1] - endTime[e])) ;
            else ans = max(ans, curFreeTime + (eventTime - endTime[e]));
        }
        return ans;
    }
};
