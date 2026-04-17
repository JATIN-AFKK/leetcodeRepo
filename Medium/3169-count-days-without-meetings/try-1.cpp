/*
 * Problem #3169: Count Days Without Meetings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/03/2025, 17:24:33
 * Link: https://leetcode.com/problems/count-days-without-meetings/
 */

class Solution {
public:
    int countDays(int days, vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int i = 0,count = 0,low = arr[0][0],high = arr[0][1];
        for(i = 1;i < arr.size();i++){
            if(arr[i][0] > high){
                count = count + arr[i][0] - high - 1;
                high = arr[i][1];
            }
            else{
                high = max(high,arr[i][1]);
            }
        }
        if(high<days){
            count += days - high;
        }
        if(low!=1){
            count += low - 1;
        }
        return count;
    }
};
