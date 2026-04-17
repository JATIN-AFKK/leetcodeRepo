/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 26
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 16:36:33
 * Link: https://leetcode.com/problems/valid-anagram/
 */

#include<algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1,map2;
        if (s.size()!=t.size()){
            return false;
        }
        for(auto i : s){
            map1[i]++;
        }
        for(auto i : t){
            map2[i]++;
        }
        return map1==map2;
    }
        
};
