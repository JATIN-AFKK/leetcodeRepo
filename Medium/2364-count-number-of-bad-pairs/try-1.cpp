/*
 * Problem #2364: Count Number of Bad Pairs
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 13:39:50
 * Link: https://leetcode.com/problems/count-number-of-bad-pairs/
 */

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long good_count = 0, n = nums.size();

        unordered_map<int,long long> up;
        for(int i = 0;i < n;i++) up[nums[i] - i]++;

        for(auto & [num , freq] : up) good_count += (freq *(freq - 1))/2;

        long long total = (long long)n*((long long)n - 1)/2;
        return  total - good_count;


    }
};
