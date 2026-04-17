/*
 * Problem #567: Permutation in String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/12/2025, 22:58:06
 * Link: https://leetcode.com/problems/permutation-in-string/
 */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> need(26,0), window(26,0);
        int winSize = s1.size();
        for(int i = 0;i < s1.size();i++){
            need[s1[i] - 'a']++;
        }
        for(int i = 0;i < s2.size(); i++){
            if(i - winSize >= 0) window[s2[i - winSize] - 'a']--;
            window[s2[i] - 'a']++;

            if(need == window) return true;
        }
        return false;
    }
};
