/*
 * Problem #598: Range Addition II
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 09:25:41
 * Link: https://leetcode.com/problems/range-addition-ii/
 */

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x = m,y = n;
        for(int i = 0;i < ops.size();i++){
            x = min(x,ops[i][0]);
            y = min(y,ops[i][1]);
        }
        return x*y;
    }
};
