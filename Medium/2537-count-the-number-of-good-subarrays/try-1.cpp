/*
 * Problem #2537: Count the Number of Good Subarrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/10/2025, 13:53:32
 * Link: https://leetcode.com/problems/count-the-number-of-good-subarrays/
 */

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int j = 0,i = 0,n = nums.size();
        long long res = 0;
        unordered_map<int,int> mp;
        int pairs = 0;
        for(;j < n;j++){
            pairs += mp[nums[j]];
            mp[nums[j]]++;
            while(pairs >= k){
                res += n - j;
                mp[nums[i]]--;
                pairs -= mp[nums[i]];
                i++;
            }
        }
        return res;
    }
};
