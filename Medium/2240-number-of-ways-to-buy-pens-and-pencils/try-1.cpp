/*
 * Problem #2240: Number of Ways to Buy Pens and Pencils
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2025, 00:25:46
 * Link: https://leetcode.com/problems/number-of-ways-to-buy-pens-and-pencils/
 */

class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int count = 0;
        long long i = 0,sum = 0;
        while(total >= i*cost1){
            sum += (total - i*cost1)/cost2 + 1;
            i++;
        }
        return sum;
    }
};
