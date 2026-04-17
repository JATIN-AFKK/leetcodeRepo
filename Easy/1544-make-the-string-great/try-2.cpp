/*
 * Problem #1544: Make The String Great
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 19/03/2025, 09:33:40
 * Link: https://leetcode.com/problems/make-the-string-great/
 */

class Solution {
public:
    string makeGood(string s) {
        string a ;
        int i;
        for(i = 0;i < s.size();i++){
            if(a.empty()){
                a.push_back(s[i]);

            }
            else{
                if(a.back() - s[i] == 32 || a.back() - s[i] == -32){
                    a.pop_back();
                }
                else{
                    a.push_back(s[i]);
                }
            }
        }
        return a;

    }
};
