/*
 * Problem #3174: Clear Digits
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2025, 09:59:03
 * Link: https://leetcode.com/problems/clear-digits/
 */

class Solution {
public:
    string clearDigits(string s) {
        string vec;
        for(int i = 0;i<s.size();i++){
            if(isalpha(s[i])){
                vec.push_back(s[i]);
            }
            else{
                vec.pop_back();
            }
        }
        return vec;
    }
};
