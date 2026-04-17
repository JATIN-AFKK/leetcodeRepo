/*
 * Problem #125: Valid Palindrome
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2025, 20:12:14
 * Link: https://leetcode.com/problems/valid-palindrome/
 */

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        int si = s.size();
        while(i<j){
            while(i<si && !isalnum(s[i])){
                i++;
            }
            if (i>j){
                break;
            }
            while(!isalnum(s[j])){
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
