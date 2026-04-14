/*
 * Problem #396: Rotate Function
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/04/2026, 12:58:32
 * Link: https://leetcode.com/problems/rotate-function/
 */

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        vector<long long> f(n);
        long long total = 0;
        long long base = 0;
        for(int i = 0;i < n; i++){
            base += nums[i] * i;
            total += nums[i];
        }

        f[0] = base;
        for(int i = 1;i < n; i++){
            f[i] = f[i - 1] - total + 1ll * n * (nums[(i - 1)]);
        }
        return *max_element(f.begin(), f.end());
    }
};
