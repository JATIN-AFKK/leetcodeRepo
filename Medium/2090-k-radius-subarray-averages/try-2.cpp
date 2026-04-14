/*
 * Problem #2090: K Radius Subarray Averages
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 19:49:15
 * Link: https://leetcode.com/problems/k-radius-subarray-averages/
 */

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<long long> prefix(nums.size() + 1);
        vector<int> ans;

        prefix[0] = 0;
        for(int i = 0;i < nums.size();i++){
            prefix[i + 1] = prefix[i] + nums[i];
        }

        for(int i = 0;i < nums.size();i++){
            if(i - k < 0 || i + k >= nums.size()) ans.push_back(-1);
            else{
                long long winSum = prefix[i + k + 1] - prefix[i - k];
                ans.push_back((int)(winSum / (2*k + 1)));
            }
        }
        return ans;
    }
};





