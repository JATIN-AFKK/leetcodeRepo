/*
 * Problem #3870: Count Commas in Range
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 08:19:29
 * Link: https://leetcode.com/problems/count-commas-in-range/
 */

class Solution {
public:

    int countCommas(int n) {
        if(n < 1000) return 0;
        
        int len = 1;
        int start = 1;
        int ans = 0;
        while(start * 10 <= n){
            int end = start * 10 - 1;
            int commas = (len - 1)/3;
            ans += (end - start + 1)*commas;

            start *= 10;
            len++;
        }
        int commas = (len - 1)/3;
        ans += (n - start + 1)*commas;

        return ans;
    }
};
