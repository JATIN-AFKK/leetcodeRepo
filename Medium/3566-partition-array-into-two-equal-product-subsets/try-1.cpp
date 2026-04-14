/*
 * Problem #3566: Partition Array into Two Equal Product Subsets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 14:34:38
 * Link: https://leetcode.com/problems/partition-array-into-two-equal-product-subsets/
 */

class Solution {
public:
    bool run(vector<int>& nums, int ind, unsigned long long first, unsigned long long second, long long target){
        if(first > target || second > target) return false;

        if(ind == nums.size()){
            if(first == target && second == target) return true;
            return false;
        }

        return run(nums, ind + 1, first * nums[ind], second, target) || run(nums, ind + 1, first, second * nums[ind], target);

    }

    bool checkEqualPartitions(vector<int>& nums, long long target) {
        return run(nums,0, 1, 1, target );
    }
};
