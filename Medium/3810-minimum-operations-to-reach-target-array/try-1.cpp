/*
 * Problem #3810: Minimum Operations to Reach Target Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2026, 21:21:29
 * Link: https://leetcode.com/problems/minimum-operations-to-reach-target-array/
 */

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        vector<bool>isVisited(1e5 + 1, false);
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == target[i]) continue;
            else if(isVisited[nums[i]] == true) continue;
            else{
                isVisited[nums[i]] = true;
                count++;
            }
        }
        return count;
        
    }
};
