/*
 * Problem #3750: Minimum Number of Flips to Reverse Binary String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2025, 20:48:35
 * Link: https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string/
 */

class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        int count = 0;
        while(n){
            s += to_string(n%2);
            n /= 2;
            
        }

        for(int i = 0;i < s.size();i++){
            if(s[i] != s[s.size() - 1 - i]){
                count++;
            }
        }
        return count;
    }
};
