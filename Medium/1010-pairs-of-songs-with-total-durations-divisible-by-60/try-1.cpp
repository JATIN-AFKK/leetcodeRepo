/*
 * Problem #1010: Pairs of Songs With Total Durations Divisible by 60
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/02/2026, 11:04:54
 * Link: https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
 */

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> count(60, 0);
        int ans = 0;
        for(int i = 0;i < time.size();i++){
            int jSong = time[i]%60;
            int iSong = (60 - jSong)%60;

            ans += count[iSong];
            count[jSong]++;
        }
        return ans;
    }
};
