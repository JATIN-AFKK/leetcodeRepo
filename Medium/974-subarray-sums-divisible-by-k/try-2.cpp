/*
 * Problem #974: Subarray Sums Divisible by K
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 22:13:25
 * Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/
 */

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res = 0,sum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i = 0;i < nums.size();i++){
            sum = (sum +nums[i])%k;
            if(sum < 0) sum += k;
            if(mp.count(sum)) res += mp[sum];
            mp[sum]++;
        }
        return res;
    }
};
