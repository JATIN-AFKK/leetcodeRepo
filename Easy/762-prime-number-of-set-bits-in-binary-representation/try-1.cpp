/*
 * Problem #762: Prime Number of Set Bits in Binary Representation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 19:30:33
 * Link: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
 */

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        set<int> st = {
            2, 3, 5, 7, 11, 13, 17, 19, 23
        };
        int ans = 0;
        for(int i = left; i <= right; i++){
            ans += st.count(__builtin_popcount(i));
        }
        return ans;
    }
};
