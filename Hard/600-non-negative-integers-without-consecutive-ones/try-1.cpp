/*
 * Problem #600: Non-negative Integers without Consecutive Ones
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2025, 14:56:03
 * Link: https://leetcode.com/problems/non-negative-integers-without-consecutive-ones/
 */

class Solution {
public:
    int findIntegers(int n) {
        vector<int> dp(32,0);
        dp[0] = 1;
        dp[1] = 2;
        for(int i = 2;i < 32;i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        int bit_num = 32;
        int pre = 0;
        int res = 0;
        while(bit_num){
            if(n & (1<<(bit_num - 1))){
                res += dp[bit_num - 1];
                if(pre == 1) return res;
                pre = 1;
            }
            else{
                pre = 0;
            }
            bit_num--;
        }
        return res + 1;
    }
};
