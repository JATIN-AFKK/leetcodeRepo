/*
 * Problem #1544: Make The String Great
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 16:47:52
 * Link: https://leetcode.com/problems/make-the-string-great/
 */

class Solution {
public:
    string makeGood(string s) {
        string result;
        int i;
        for(i = 0;i < s.size();i++){
            if(result.empty()){
                result += s[i];
            }
            else{
                if(s[i] - result.back() == -32 || s[i] - result.back() == 32){
                    result.pop_back();
                }
                else{
                    result += s[i];
                }
            }
        }
        return result;
    }
};
