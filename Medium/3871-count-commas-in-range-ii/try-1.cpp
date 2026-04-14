/*
 * Problem #3871: Count Commas in Range II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 08:28:37
 * Link: https://leetcode.com/problems/count-commas-in-range-ii/
 */

class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;

        int len = 1;
        long long start = 1;
        long long ans = 0;

        while(start * 10 <= n){
            long long end = start*10 - 1;
            long long commas = (len - 1)/3;
            ans += (end - start + 1) * commas;

            len++;
            start *= 10;

            cout << ans << endl;
        }

        long  long commas = (len - 1)/3;
        long long possible = (n - start + 1);
        ans += possible * commas;

        return ans;
    }
};
