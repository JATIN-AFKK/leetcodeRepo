/*
 * Problem #125: Valid Palindrome
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2025, 21:16:30
 * Link: https://leetcode.com/problems/valid-palindrome/
 */

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        int si = s.size();
        while(i<j){
            while(i<j && !isalnum(s[i])){
                i++;
            }
            
            while(i<j && !isalnum(s[j])){
                j--;
            }
            if (tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
