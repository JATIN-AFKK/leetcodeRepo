/*
 * Problem #3867: Sum of GCD of Formed Pairs
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 20:12:19
 * Link: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
 */

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixgcd;
        long long ans = 0;
        int mx = INT_MIN;
        for(int i = 0;i < nums.size(); i++){
            mx = max(mx, nums[i]);
            prefixgcd.push_back( gcd(mx, nums[i]) );
        }

        sort(prefixgcd.begin(), prefixgcd.end());

        for(int i = 0;i < prefixgcd.size()/2; i++){
            ans += gcd(prefixgcd[i], prefixgcd[nums.size() - i - 1]);
        }
        return ans;
    }
};
