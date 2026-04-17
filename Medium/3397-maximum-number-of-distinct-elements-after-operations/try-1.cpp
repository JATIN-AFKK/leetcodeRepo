/*
 * Problem #3397: Maximum Number of Distinct Elements After Operations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2025, 08:51:21
 * Link: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
 */

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long count = 0;
        long long cur_free = LLONG_MIN;
        for(long long x : nums){
            long long assign = max((long long)(x - k),cur_free);
            if(assign <= x+k){
                count++;
                cur_free = assign + 1;
            }
        }    
        return count;    
    }
};
