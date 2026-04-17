/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 15
 * status: Accepted
 * Language: cpp
 * Date: 26/03/2025, 10:44:23
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int i=0,e=0,mx=0;

        for(e=0;e<s.size();e++){
            map[s[e]]++;
            while(map[s[e]]>1){
                map[s[i]]--;
                i++;
            }
            mx=max(mx,e-i+1);
        }
        return mx;
    }
};
