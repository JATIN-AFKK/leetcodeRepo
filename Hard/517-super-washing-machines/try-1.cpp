/*
 * Problem #517: Super Washing Machines
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 21:45:22
 * Link: https://leetcode.com/problems/super-washing-machines/
 */

class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int sum = accumulate(machines.begin(),machines.end(),0);
        int n = machines.size();
        if(sum%machines.size()) return -1;
         int avg = sum / n;
         int res = 0,bal = 0;
         for(int x : machines){
            int diff = x - avg;
            bal += diff;
            res = max(abs(bal),max(res,diff));
         }
         return res;

    }
};
