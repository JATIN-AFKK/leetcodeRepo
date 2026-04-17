/*
 * Problem #3722: Lexicographically Smallest String After Reverse
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/10/2025, 20:15:50
 * Link: https://leetcode.com/problems/lexicographically-smallest-string-after-reverse/
 */

class Solution {
public:
    string lexSmallest(string s) {
        string result = s;
        for(int i = 1;i <= s.size();i++){
            reverse(s.begin(),s.begin() + i);
            result = min(result,s);
            reverse(s.begin(),s.begin() + i);
        }
        for(int i = 1;i <= s.size();i++){
            reverse(s.end()-i,s.end());
            result = min(result,s);
            reverse(s.end()-i,s.end());
            
        }
        return result;
        
        
    }
};
