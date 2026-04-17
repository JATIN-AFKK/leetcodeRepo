/*
 * Problem #128: Longest Consecutive Sequence
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2025, 15:58:29
 * Link: https://leetcode.com/problems/longest-consecutive-sequence/
 */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int result = 1,longest = 1,pre = INT_MIN;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]-1 == pre){
                longest++;
                pre = nums[i];
                result = max(longest,result);
            }
            else if(nums[i] == pre){
                continue;
            }
            else{
                pre = nums[i];
                longest = 1;
            }
        }
        return result;
    }
};
