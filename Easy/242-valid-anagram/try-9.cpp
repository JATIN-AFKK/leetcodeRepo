/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 9
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 15:48:34
 * Link: https://leetcode.com/problems/valid-anagram/
 */

#include<algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        return s==t;    
    }
        
};
