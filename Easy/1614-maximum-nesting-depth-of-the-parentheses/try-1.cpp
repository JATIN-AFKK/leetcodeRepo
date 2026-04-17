/*
 * Problem #1614: Maximum Nesting Depth of the Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 16:23:54
 * Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 */

class Solution {
public:
    int maxDepth(string s) {
        int result = 0,i,open = 0;
        for(i = 0;i < s.size();i++){
            if(s[i] == '('){
                open++;
            }
            else if(s[i] == ')'){
                open--;
            }
            result = max(result , open);
        }
        return result;
    }
};
