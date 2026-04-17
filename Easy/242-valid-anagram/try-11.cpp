/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 11
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 15:49:41
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
        return s==t;    
    }
        
};
