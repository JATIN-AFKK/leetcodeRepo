/*
 * Problem #779: K-th Symbol in Grammar
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/03/2026, 23:48:42
 * Link: https://leetcode.com/problems/k-th-symbol-in-grammar/
 */

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1 && k == 1) return 0;
        int rowSize = (1 << (n - 1));

        if(rowSize/2 >= k) return kthGrammar(n - 1, k);
        else return 1^kthGrammar(n - 1,k - rowSize/2);


    }
};
