/*
 * Problem #974: Subarray Sums Divisible by K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 16:52:40
 * Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/
 */

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> up;
        up[0] = 1;
        int sum = 0,count = 0;
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
            int n = sum%k;
            if(n < 0) n = n + k;
            if(up.find(n)!= up.end()){
                count += up[n];
            }
            up[n]++;
        }
        return count;
    }
};
