/*
 * Problem #560: Subarray Sum Equals K
 * Difficulty: Medium
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 18:25:38
 * Link: https://leetcode.com/problems/subarray-sum-equals-k/
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0,res = 0;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            if(mp.find(sum - k) != mp.end()) res += mp[sum - k];
            mp[sum]++;
        }
        return res;
    }
};
