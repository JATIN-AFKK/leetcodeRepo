/*
 * Problem #424: Longest Repeating Character Replacement
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/12/2024, 16:52:23
 * Link: https://leetcode.com/problems/longest-repeating-character-replacement/
 */

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map;
        int in,mx=0,re=0,start=0;
        for(int end=0;end<s.size();end++){
            map[s[end]]++;
            mx=max(mx,map[s[end]]);
            while(end-start-mx+1>k){
                map[s[start]]--;
                start++;
            }   
            re=max(re,end-start+1);
        }
        return re;
    }
};
