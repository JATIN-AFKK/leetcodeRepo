/*
 * Problem #3813: Vowel-Consonant Score
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2026, 08:06:50
 * Link: https://leetcode.com/problems/vowel-consonant-score/
 */

class Solution {
public:
    int vowelConsonantScore(string s) {
        vector<int> arr(26, 0);
        int v = 0, u = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == ' ') continue;
            if(isdigit(s[i])) continue;

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                v++;
            }
            else{
                u++;
            }
        }
        
        if(u == 0) return 0;
        else return v/u;
    }
};
