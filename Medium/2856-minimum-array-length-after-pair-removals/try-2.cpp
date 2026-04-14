/*
 * Problem #2856: Minimum Array Length After Pair Removals
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 22:43:30
 * Link: https://leetcode.com/problems/minimum-array-length-after-pair-removals/
 */

class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int count = 1, maxCount = 1;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == nums[i - 1]) count++;
            else{
                maxCount = max(count, maxCount);
                count = 1;

            }
        }
        maxCount = max(count, maxCount);
        if(maxCount > nums.size()/2) return 2*maxCount - nums.size();
        return nums.size()%2;

    }
};
