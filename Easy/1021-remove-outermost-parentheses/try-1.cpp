/*
 * Problem #1021: Remove Outermost Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 16:13:06
 * Link: https://leetcode.com/problems/remove-outermost-parentheses/
 */

class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0,close = 0,i;
        string result;
        
    
        for(i = 0;i<s.size();i++){
            if(open == close){
                if (!result.empty()){
                    result.pop_back();
                }
                open = 1;
                close = 0;
            }
            else{
                result += s[i];
                if(s[i] =='('){
                    open++;
                }
                else{
                    close++;
                }
            }
        }
        result.pop_back();
        return result;
    }
};
