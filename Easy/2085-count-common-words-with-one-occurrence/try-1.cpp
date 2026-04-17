/*
 * Problem #2085: Count Common Words With One Occurrence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 12:25:40
 * Link: https://leetcode.com/problems/count-common-words-with-one-occurrence/
 */

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> ump1, ump2;
        int ans = 0;

        for(string str : words1) ump1[str]++;
        for(string str : words2) ump2[str]++;
        for(string str : words1) if(ump1[str] == 1 && ump2[str] == 1) ans++;
        return ans;


    }
};
