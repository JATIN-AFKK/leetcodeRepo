/*
 * Problem #1025: Divisor Game
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/10/2025, 10:41:41
 * Link: https://leetcode.com/problems/divisor-game/
 */

class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n+1,false);
        dp[2] = true;
        for(int i = 3;i <= n;i++){
            for(int x = 1;x < i;x++){
                if(i%x == 0 && dp[i - x] == false){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
