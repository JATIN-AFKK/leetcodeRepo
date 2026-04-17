/*
 * Problem #383: Ransom Note
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/01/2026, 16:15:47
 * Link: https://leetcode.com/problems/ransom-note/
 */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec(26,0);
        for(char ch : magazine){
            vec[ch - 'a']++;
        }
        for(char ch : ransomNote){
            vec[ch - 'a']--;
            if(vec[ch - 'a'] == -1) return false;
        }
        return true;
    }
};
