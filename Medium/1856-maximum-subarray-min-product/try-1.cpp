/*
 * Problem #1856: Maximum Subarray Min-Product
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/12/2025, 19:40:03
 * Link: https://leetcode.com/problems/maximum-subarray-min-product/
 */

class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        long long ans = INT_MIN;
        int n = nums.size();
        const int MOD = 1e9 + 7;

        stack<int> stk;
        vector<int> L(n), R(n);
        vector<long long> pre(n + 1);

        pre[0] = 0;
        for(int i = 0; i < n; i++){
            pre[i + 1] = pre[i] + nums[i];
        }

        for(int i = 0;i < n; i++){
            while(!stk.empty() && nums[stk.top()] >= nums[i]){
                R[stk.top()] = i;
                stk.pop();
            }
            L[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }
        while(!stk.empty()){
            R[stk.top()] = n;
            stk.pop();
        }

        for(int i = 0;i < n; i++){
            long long minProduct = (long long) nums[i] * (pre[R[i]] - pre[L[i] + 1]);

            ans = max(ans, minProduct);
        }
        return ans%MOD;
    }
};
