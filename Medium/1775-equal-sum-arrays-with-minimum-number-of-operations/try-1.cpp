/*
 * Problem #1775: Equal Sum Arrays With Minimum Number of Operations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 14:34:36
 * Link: https://leetcode.com/problems/equal-sum-arrays-with-minimum-number-of-operations/
 */

class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size(), m = nums2.size();
        if(6*n < m || 6*m < n) return -1;

        int sum1 = accumulate(nums1.begin(), nums1.end(), 0);
        int sum2 = accumulate(nums2.begin(), nums2.end(), 0);

        if(sum1 == sum2) return 0;
        if(sum2 > sum1) return minOperations(nums2, nums1);

        vector<int> gains;
        for(int num : nums1) gains.push_back(num - 1);
        for(int num : nums2) gains.push_back(6 - num);

        sort(gains.begin(), gains.end(), greater<int>());
        
        int ops = 0;
        int diff = sum1 - sum2;
        for(int g : gains){
            diff -= g;
            ops++;
            if(diff <= 0) break;
        }
        return ops;
    }
};
