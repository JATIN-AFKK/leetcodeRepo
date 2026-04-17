/*
 * Problem #441: Arranging Coins
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 21:59:58
 * Link: https://leetcode.com/problems/arranging-coins/
 */

class Solution {
public:
    int arrangeCoins(int n) {
        int i = 0,j = n,ans;
        long long mid;
        while(i<=j){
            mid = i + (j - i)/2;
            if(mid*(mid+1)/2 == n){
                return mid;
            }
            else if(mid*(mid+1)/2 > n){
                j = mid - 1;
            }
            else{
                ans = mid;
                i = mid + 1;
            }
        }
        return ans;
    }
};
