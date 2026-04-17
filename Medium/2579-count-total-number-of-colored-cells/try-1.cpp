/*
 * Problem #2579: Count Total Number of Colored Cells
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/03/2025, 23:03:43
 * Link: https://leetcode.com/problems/count-total-number-of-colored-cells/
 */

class Solution {
public:
    long long coloredCells(int n){
        if(n == 1){
            return 1;
        }
        return (n-1)*4 + coloredCells(n-1);
    }
};
