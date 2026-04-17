/*
 * Problem #724: Find Pivot Index
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 10:56:12
 * Link: https://leetcode.com/problems/find-pivot-index/
 */

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int  total = 0,left = 0;
        for(int n : nums) total += n;
        for(int i = 0;i < nums.size();i++){
            if(left == total - left - nums[i]){
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};
