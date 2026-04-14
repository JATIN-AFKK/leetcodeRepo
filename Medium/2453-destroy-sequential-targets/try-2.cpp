/*
 * Problem #2453: Destroy Sequential Targets
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 15:55:04
 * Link: https://leetcode.com/problems/destroy-sequential-targets/
 */

class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int,int> up;
        int high = INT_MIN;
        for(int num : nums) {
            up[num % space]++;
            high = max(high, up[num % space]);
        }
        int ans = INT_MAX;
        for(int i = 0;i < nums.size();i++){
           if(up[nums[i] % space] == high){
            ans = min(ans, nums[i]);
           }
        }
        return ans;
    }
};
