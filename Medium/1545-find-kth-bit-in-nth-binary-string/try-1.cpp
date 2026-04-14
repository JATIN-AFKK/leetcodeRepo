/*
 * Problem #1545: Find Kth Bit in Nth Binary String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 17:28:30
 * Link: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
 */

class Solution {
public:
    char flip(char ch){
        if(ch == '0') return '1';
        return '0';
    }
    char findKthBit(int n, int k) {
        if(n == 1) return '0';
        int threshold = 1 << (n - 1);

        if(threshold == k) return '1';
        else if(threshold < k) return flip(findKthBit(n - 1, 2*threshold - k));
        return findKthBit(n - 1, k);
    }
};
