/*
 * Problem #1991: Find the Middle Index in Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 19:11:51
 * Link: https://leetcode.com/problems/find-the-middle-index-in-array/
 */

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0,cur = 0;
        for(int i = 0;i < nums.size();i++) sum += nums[i];
        for(int i = 0;i < nums.size();i++){
            if(cur == sum - cur - nums[i]){
                return i;
            }
            cur += nums[i];
        }
        return -1;
    }
};
