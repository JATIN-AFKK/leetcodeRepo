/*
 * Problem #1941: Check if All Characters Have Equal Number of Occurrences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 11:28:37
 * Link: https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
 */

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> vec(26, 0);
        for(char ch : s) vec[ch - 'a']++;

        int pre = -1;
        for(int count : vec){
            if(count == 0) continue;
            else if(pre == -1) pre = count;
            else if(pre != count) return false;
            
        }
        return true;
    }
};
