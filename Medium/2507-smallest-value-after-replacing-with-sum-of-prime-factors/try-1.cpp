/*
 * Problem #2507: Smallest Value After Replacing With Sum of Prime Factors
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 18:16:37
 * Link: https://leetcode.com/problems/smallest-value-after-replacing-with-sum-of-prime-factors/
 */

class Solution {
public:
    int primeSum(int num){
        int count = 0;
        for(int i = 2; i * i <= num; i++){
            while(num % i == 0){
                count += i;
                num /= i;
            }
        }
        if(num > 1) count += num;
        return count;
    }
    int smallestValue(int n) {
        while(true){
            int d = primeSum(n);
            if(d == n){
                n = d;
                break;
            }
            n = d;
        }
        return n;
    }
};
