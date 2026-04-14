/*
 * Problem #3304: Find the K-th Character in String Game I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 09:51:53
 * Link: https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/
 */

class Solution {
public:
    char kthCharacter(int k) {
        if( (k&(k-1)) == 0 ) return 'a' + (31 - __builtin_clz(k)) % 26;

        int power = (1 << (31 - __builtin_clz(k)));
        return ((1 + kthCharacter(k - power)) - 'a') % 26 + 'a';
    }
};
