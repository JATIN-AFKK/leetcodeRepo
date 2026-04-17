/*
 * Problem #5: Longest Palindromic Substring
 * Difficulty: Medium
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2024, 21:12:15
 * Link: https://leetcode.com/problems/longest-palindromic-substring/
 */

class Solution {
public:
    string longestPalindrome(string s) {
        int left,right;
        string mx="",temp;
        for(int i=0;i<s.size();i++){
            left=i;
            right=i;
            temp=s[i];
            while(left-1>=0 && right+1<s.size() && s[left-1]==s[right+1]){
                left--;
                right++;
                temp=s[left]+temp+s[right];
            } 
            if(mx.size()<temp.size()){
                mx=temp;
            }
       
            if (s[i]!=s[i+1]){
                continue;
            }
            left=i;
            right=i+1;
            temp=s[i];
            temp+=s[i+1];
            
            while(left-1>=0 && right+1<s.size() &&  s[left-1]==s[right+1]){
                right++;
                left--;
                temp=s[left]+temp+s[right];
            }
            if(mx.size()<temp.size()){
                mx=temp;
            }
        
        }
        return mx;
    }
};
