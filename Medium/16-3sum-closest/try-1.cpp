/*
 * Problem #16: 3Sum Closest
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 11:41:10
 * Link: https://leetcode.com/problems/3sum-closest/
 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0;i < n; i++){
            for(int j = i + 1; j < n; j++){
                int x = target - nums[i] - nums[j];
                auto it = lower_bound(nums.begin() + j + 1, nums.end(), x);
                int k = it - nums.begin();

                if(k < n && k > j){
                    if(abs(ans - target) > abs(x - nums[k])) ans = nums[i] + nums[j] + nums[k];
                } 
                if(k - 1 < n && k - 1 > j){
                    if(abs(ans - target) > abs(x - nums[k - 1])) ans = nums[i] + nums[j] + nums[k - 1];
                } 
            }
        }
        return ans;
    }
};
