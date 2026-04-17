/*
 * Problem #1748: Sum of Unique Elements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 22:09:03
 * Link: https://leetcode.com/problems/sum-of-unique-elements/
 */

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> vec(101, 0);
        for(int num : nums) vec[num]++;

        int sum = 0;
        for(int i = 1;i < 101;i++) if(vec[i] == 1) sum += i;

        return sum;
    }
};
