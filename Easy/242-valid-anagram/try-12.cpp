/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 12
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 15:55:55
 * Link: https://leetcode.com/problems/valid-anagram/
 */

#include<algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1,map2;

        for(auto i : s){
            map1[i]++;
        }
        for(auto i : t){
            map2[i]++;
        }
        return map1==map2;
    }
        
};
