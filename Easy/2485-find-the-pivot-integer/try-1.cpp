/*
 * Problem #2485: Find the Pivot Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 19:47:39
 * Link: https://leetcode.com/problems/find-the-pivot-integer/
 */

class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefix;
        prefix.push_back(0);
        for(int i = 1;i <=n;i++){
            prefix.push_back(prefix[i-1] + i);
        }
        for(int i = 1;i <= n;i++){
            if(prefix[i] == prefix[n] - prefix[i] + i){
                return i;
            }
        }
        return -1;
    }
};
