/*
 * Problem #9: Palindrome Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/09/2024, 22:50:49
 * Link: https://leetcode.com/problems/palindrome-number/
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        long long i=x,r=0;
        while(i!=0){
            r=r*10+i%10;
            i=i/10;
        }

        if(r==x){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};
