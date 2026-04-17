/*
 * Problem #2206: Divide Array Into Equal Pairs
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 10:52:12
 * Link: https://leetcode.com/problems/divide-array-into-equal-pairs/
 */

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> count(500, 0);
        for(int num : nums) count[num - 1]++;

        for(int i = 0;i < 500;i++) if(count[i] % 2 == 1) return false;
        return true;
        
    }
};
