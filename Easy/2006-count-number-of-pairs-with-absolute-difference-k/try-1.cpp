/*
 * Problem #2006: Count Number of Pairs With Absolute Difference K
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 11:47:02
 * Link: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
 */

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        int count = 0;

        for(int i = 0;i < nums.size();i++){
            count += ump[nums[i] - k];
            count += ump[nums[i] + k];
            ump[nums[i]]++;
        }
        return count;
    }
};
