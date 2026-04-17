/*
 * Problem #1109: Corporate Flight Bookings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/10/2025, 11:44:06
 * Link: https://leetcode.com/problems/corporate-flight-bookings/
 */

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> prefix(n+2,0);
        vector<int> result;
        int count = 0;
        for(auto i : bookings){
            prefix[i[0]] += i[2];
            prefix[i[1]+1] -= i[2];
        }
        for(int i = 1;i < n+1;i++){
            count += prefix[i];
            result.push_back(count);
        }
        return result;
    }
};
