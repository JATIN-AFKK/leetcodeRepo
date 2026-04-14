/*
 * Problem #2932: Maximum Strong Pair XOR I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 23:02:38
 * Link: https://leetcode.com/problems/maximum-strong-pair-xor-i/
 */

class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        for(int num1 : nums){
            for(int num2 : nums){
                if(abs(num1 - num2) <= min(num1, num2)){
                    ans = max(ans, num1 ^ num2);
                }
            }
        }
        return ans;
    }
};
