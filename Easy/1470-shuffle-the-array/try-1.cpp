/*
 * Problem #1470: Shuffle the Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 12:27:38
 * Link: https://leetcode.com/problems/shuffle-the-array/
 */

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        for(int i = 0;i < n;i++){
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }
        return result;
    }
};
