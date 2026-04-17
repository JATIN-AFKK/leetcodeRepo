/*
 * Problem #1438: Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2025, 19:01:10
 * Link: https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/
 */

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>dqMin, dqMax;

        int l = -1, ans = 1;
        for(int i = 0;i < nums.size(); i++){
            while(!dqMax.empty() && nums[dqMax.back()] < nums[i]){
                dqMax.pop_back();
            }

            while(!dqMin.empty() && nums[dqMin.back()] > nums[i]){
                dqMin.pop_back();
            }

            dqMax.push_back(i);
            dqMin.push_back(i);

            while(abs(nums[dqMax.front()] - nums[dqMin.front()]) > limit){
                l++;
                if(dqMax.front() == l) dqMax.pop_front();
                if(dqMin.front() == l) dqMin.pop_front();
            }
            ans = max(ans, i - l);
            
        }
        return ans;
    }
};
