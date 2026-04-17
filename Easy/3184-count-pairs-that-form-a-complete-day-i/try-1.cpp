/*
 * Problem #3184: Count Pairs That Form a Complete Day I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/02/2026, 12:33:03
 * Link: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/
 */

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        vector<int> modHour(24, 0);
        int count = 0;
        for(int i = 0;i < hours.size();i++){
            int effHour = hours[i]%24;
            count += modHour[(24 - effHour)%24];
            modHour[effHour]++;
        }
        return count;
    }
};
