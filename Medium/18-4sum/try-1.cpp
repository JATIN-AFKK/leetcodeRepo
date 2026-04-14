/*
 * Problem #18: 4Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 12:13:56
 * Link: https://leetcode.com/problems/4sum/
 */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0;i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < nums.size(); j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int k = j + 1, l = n - 1;
                while(k < l){
                    long long sum = 1ll*nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum > 1ll*target) l--;
                    else if(sum < 1ll*target) k++;
                    else {
                        ans.push_back({nums[i] , nums[j] , nums[k] , nums[l]});
                        k++;
                        l--;

                        while(k < l && nums[k] == nums[k - 1]) k++;
                        while(k < l && nums[l] == nums[l + 1]) l--;
                    }
                }   
            }
        }
        return ans;
    }
};
