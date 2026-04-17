/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 21:39:32
 * Link: https://leetcode.com/problems/valid-anagram/
 */

#include<algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        for(int i =0;i<s.size();i++){
            if(t[i]!=s[i]){
                return false;
            }
        }
        return true;
        
    }
        
};
