/*
 * Problem #2206: Divide Array Into Equal Pairs
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 10:56:55
 * Link: https://leetcode.com/problems/divide-array-into-equal-pairs/
 */

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<bool> isEven(500, true);
        for(int num : nums) isEven[num - 1] = isEven[num - 1] ^ 1;

        for(int flag : isEven) if(!flag) return false;
        return true;

    }
};
