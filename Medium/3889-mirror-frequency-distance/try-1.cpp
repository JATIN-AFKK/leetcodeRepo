/*
 * Problem #3889: Mirror Frequency Distance
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 16:23:27
 * Link: https://leetcode.com/problems/mirror-frequency-distance/
 */

class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> count(26, 0), count2(10, 0);
        for(int i = 0;i < s.size(); i++){
            if(isdigit(s[i])) count2[s[i] - '0']++;
            else count[s[i] - 'a']++;
        }
        int ans = 0;
        for(int i = 0;i < 13; i++) ans += abs(count[i] - count[25 - i]);
        for(int i = 0;i < 5; i++) ans += abs(count2[i] - count2[9 - i]);
        return ans;

    }
};
