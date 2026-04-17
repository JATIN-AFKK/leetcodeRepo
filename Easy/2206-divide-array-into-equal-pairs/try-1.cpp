/*
 * Problem #2206: Divide Array Into Equal Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 10:49:52
 * Link: https://leetcode.com/problems/divide-array-into-equal-pairs/
 */

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bitset<501> b1;
        for(int num : nums){
            b1.flip(num);
        }
        return b1.count() == 0;
    }
};
