/*
 * Problem #769: Max Chunks To Make Sorted
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/09/2025, 10:32:22
 * Link: https://leetcode.com/problems/max-chunks-to-make-sorted/
 */

class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int i = 0,j = -1, result = 0;
        if(nums.size() == 1){
            return 1;
        }
        while(i < nums.size()){
            j = max(j,nums[i]);
            j = max(j,nums[nums[i]]);
            swap(nums[nums[i]], nums[i]);
            if(i == j){
                result++;
            }
            i++;
        }
        return result;
    }
};
