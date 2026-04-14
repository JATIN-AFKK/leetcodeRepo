/*
 * Problem #2653: Sliding Subarray Beauty
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 00:59:01
 * Link: https://leetcode.com/problems/sliding-subarray-beauty/
 */

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        map<int,int> mp;
        vector<int> ans;

        int l = 0;
        for(int e = 0;e < n; e++){
            mp[nums[e]]++;

            if(e - l + 1 < k) continue;

            int position = x;
            for(auto [val, freq] : mp){
                if(val > 0) continue;
                else if(position > freq) position -= freq;
                else {
                    position = 0;
                    ans.push_back(val);
                    break;
                }
            }
            if(position != 0) ans.push_back(0);
            if(--mp[nums[l]] == 0) mp.erase(nums[l]);
            l++;
        }
        return ans;
    }
};
