/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 17
 * status: Accepted
 * Language: cpp
 * Date: 04/12/2024, 16:15:19
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int& n : nums) {
            if (uset.count(n))
                return true;
            uset.insert(n);
        }
        return false;
    }
};
