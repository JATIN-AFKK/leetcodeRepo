/*
 * Problem #3174: Clear Digits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2025, 09:56:04
 * Link: https://leetcode.com/problems/clear-digits/
 */

class Solution {
public:
    string clearDigits(string s) {
        vector<char> vec;
        for(int i = 0;i<s.size();i++){
            if(isalpha(s[i])){
                vec.push_back(s[i]);
            }
            else{
                vec.pop_back();
            }
        }
        string st = "";
        for(auto j : vec){
            st+=j;
        }
        return st;
    }
};
