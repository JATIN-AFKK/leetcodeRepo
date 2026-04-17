/*
 * Problem #14: Longest Common Prefix
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/11/2024, 13:05:47
 * Link: https://leetcode.com/problems/longest-common-prefix/
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int k=0,i;
        while(true){
            for(i=0;i<strs.size();i++){
                if(k>=strs[i].size()){
                    return s;
                }
                else if(strs[0][k]!=strs[i][k]){
                    return s;
                }
            }
            s+=strs[i-1][k];
            k++;
        }
    }
};
