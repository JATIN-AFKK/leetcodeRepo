/*
 * Problem #907: Sum of Subarray Minimums
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/12/2025, 12:44:50
 * Link: https://leetcode.com/problems/sum-of-subarray-minimums/
 */

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int mod = 1e9 + 7;
        int n = arr.size();
        long long ans = 0;
        vector<int> L(n), R(n);
        stack<int> stk;


        for(int i = 0;i < n; i++){
            while(!stk.empty() && arr[stk.top()] >= arr[i]){
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
            ans += (long long) arr[i]*(i - L[i])*(R[i] - i);
            ans = ans % mod;
        }
        return ans;
    }
};
