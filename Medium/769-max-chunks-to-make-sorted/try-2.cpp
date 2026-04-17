/*
 * Problem #769: Max Chunks To Make Sorted
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/09/2025, 10:34:36
 * Link: https://leetcode.com/problems/max-chunks-to-make-sorted/
 */

class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int i = 0,sofar = 0, chunk = 0;
        for(i = 0;i < nums.size();i++){
            sofar = max(sofar,nums[i]);
            if(sofar == i){
                chunk++;
            }
        }
        return chunk;
    }
};
