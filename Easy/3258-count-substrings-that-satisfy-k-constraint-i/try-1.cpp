/*
 * Problem #3258: Count Substrings That Satisfy K-Constraint I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 11:01:23
 * Link: https://leetcode.com/problems/count-substrings-that-satisfy-k-constraint-i/
 */

class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int zero = 0, one = 0, ans = 0;
        int l = -1;
        for(int e = 0;e < s.size();e++){
            if(s[e] == '0') zero++;
            else one++;

            while(zero > k && one > k){
                l++;
                if(s[l] == '0') zero--;
                else one--;
            }
            ans += e - l;
        }
        return ans;
    }
};
