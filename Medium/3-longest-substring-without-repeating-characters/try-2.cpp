/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 23:09:03
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,char> map;
        int c=0,sum=0;
        for(int i=0;i<s.size();i++){
            c=0;
            map.clear();
            for(int j=i;j<s.size();j++){
                if(map[s[j]]>0){
                    break;
                }
                else{
                    map[s[j]]++;
                    c++;
                }
            }
            if(c>sum){
                sum=c;
            }
        }
        return sum;
    }
};
