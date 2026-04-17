/*
 * Problem #5: Longest Palindromic Substring
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 12/12/2024, 23:59:06
 * Link: https://leetcode.com/problems/longest-palindromic-substring/
 */

class Solution:
    def longestPalindrome(self, s: str) -> str:
        mx=""
        for i in range(len(s)):
            left=i
            right=i
            r=s[i]
            while(left-1>=0 and right+1<len(s) and s[left-1]==s[right+1]):
                left-=1
                r=s[left]+r+s[left]
                right+=1
            if len(mx)<len(r):
                mx=r

        for i in range(len(s)-1):
            if(s[i]==s[i+1]):
                left=i
                right=i+1
                r=s[i]+s[i+1]
                while(left-1>=0 and right+1<len(s) and s[left-1]==s[right+1]):
                    left-=1
                    r=s[left]+r+s[left]
                    right+=1
                if len(mx)<len(r):
                    mx=r
                

        return mx            

        
