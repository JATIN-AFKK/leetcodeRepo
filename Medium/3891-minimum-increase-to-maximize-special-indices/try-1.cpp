/*
 * Problem #3891: Minimum Increase to Maximize Special Indices
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 17:48:04
 * Link: https://leetcode.com/problems/minimum-increase-to-maximize-special-indices/
 */

class Solution {
public:
    long long minIncrease(vector<int>& nums) {
        int n = nums.size();
        int size = (n - 1)/2;
        vector<long long> prefix(size, 0), suffix(size, 0);
        long long pre = 0, suf = 0;
        for(int i = 0;i < size; i++){
            prefix[i] += pre;
            prefix[i] += max(0,max(nums[2*i + 2], nums[2*i]) - nums[2*i + 1] + 1);
            pre = prefix[i];
        }
        cout << endl;

        reverse(nums.begin(), nums.end());
        for(int i = 0;i < size; i++){
            suffix[i] += suf;
            suffix[i] += max(0,max(nums[2*i + 2], nums[2*i]) - nums[2*i + 1] + 1);
            suf = suffix[i];

        }
        if(n % 2 == 1) return prefix.back();
        long long ans = min(suffix.back(), prefix.back());
        for(int i = 0;i < size - 1; i++){
            ans = min(ans,prefix[i] + suffix[size - i - 2]);
        }
        return ans;

    }
};
