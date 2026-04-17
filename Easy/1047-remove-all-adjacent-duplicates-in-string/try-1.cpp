/*
 * Problem #1047: Remove All Adjacent Duplicates In String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 16:30:48
 * Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
 */

class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        int i;
        for(i = 0;i < s.size();i++){
            if(result.empty()){
                result += s[i];
            }

            else{
                if(result.back() == s[i]){
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
