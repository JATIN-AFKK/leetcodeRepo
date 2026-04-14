/*
 * Problem #1513: Number of Substrings With Only 1s
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/04/2026, 14:37:07
 * Link: https://leetcode.com/problems/number-of-substrings-with-only-1s/
 */

class Solution {
public:
    int MOD = 1e9 + 7;
    int numSub(string s) {
        long long count = 0;
        long long ans = 0;
        for(char ch : s){
            if(ch == '1') count++;
            else{
                ans += (count * (count + 1))/2;
                ans %= MOD;
                cout << count << endl;
                count = 0;
                
            }
        }

        ans += (count * (count + 1))/2;
        ans %= MOD;
        return (int) ans;

    }
};
