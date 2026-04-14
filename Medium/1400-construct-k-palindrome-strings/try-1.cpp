/*
 * Problem #1400: Construct K Palindrome Strings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 14:29:36
 * Link: https://leetcode.com/problems/construct-k-palindrome-strings/
 */

class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k > s.size()) return false;
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        int oddCount = 0;
        int max_possible = 0;
        for(int freq : count){
            if(freq%2) oddCount++;
            max_possible += freq / 2;
        }
        if(oddCount > k) return false;
        return true; 
    }
};
