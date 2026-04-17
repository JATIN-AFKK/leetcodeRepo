/*
 * Problem #2154: Keep Multiplying Found Values by Two
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 19:51:28
 * Link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/
 */

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        while(binary_search(nums.begin(), nums.end(), original)) original *= 2;
        return original;
    }
};
