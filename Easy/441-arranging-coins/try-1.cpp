/*
 * Problem #441: Arranging Coins
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 21:56:01
 * Link: https://leetcode.com/problems/arranging-coins/
 */

class Solution {
public:
    int arrangeCoins(int n) {
        int i , upper = n;
        for(i = 1; i <= n;i++){
            if(upper - i < 0){
                break;
            }
            upper = upper - i;
        }
        return i - 1;
    }
};
