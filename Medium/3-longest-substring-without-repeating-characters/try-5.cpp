/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 07/12/2024, 14:55:22
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int i=0,e=0,mx=0;

        while(e<s.size()){
            map[s[e]]++;
            while(map[s[e]]>1){
                map[s[i]]--;
                i++;
            }
            mx=max(mx,e-i+1);
            e++;
        }
        return mx;
    }
};
