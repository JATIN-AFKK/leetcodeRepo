/*
 * Problem #3438: Find Valid Pair of Adjacent Digits in String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2026, 11:22:37
 * Link: https://leetcode.com/problems/find-valid-pair-of-adjacent-digits-in-string/
 */

class Solution {
public:
    string findValidPair(string s) {
        vector<int> count(10, 0);
        string result = "";
        for(char ch : s){
            count[ch - '0']++;
        }
        for(int i = 0; i < s.size() - 1;i++){
            if(s[i] != s[i+1] && count[s[i] - '0'] == (s[i] - '0') && count[s[i+1] - '0'] == (s[i+1] - '0')){
                result += s[i];
                result += s[i+1];
                break;
            }
        }
        return result;
    }
};
