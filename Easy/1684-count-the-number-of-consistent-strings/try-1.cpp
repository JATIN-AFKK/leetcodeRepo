/*
 * Problem #1684: Count the Number of Consistent Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 11:53:30
 * Link: https://leetcode.com/problems/count-the-number-of-consistent-strings/
 */

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int encode = 0;
        for( char ch : allowed){
            encode |= (1 << (ch-'a'));
        }
        int count = 0;
        for(string word : words){
            int encodedWord = 0;
            for(char ch : word){
                encodedWord |= (1 << (ch - 'a'));
            }
            int notAllowedBits = ~(encode)&encodedWord;
            if(!notAllowedBits) count++;
        }
        return count;
    }
};
