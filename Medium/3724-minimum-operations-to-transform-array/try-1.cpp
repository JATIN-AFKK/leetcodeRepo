/*
 * Problem #3724: Minimum Operations to Transform Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/10/2025, 20:47:32
 * Link: https://leetcode.com/problems/minimum-operations-to-transform-array/
 */

class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
        long long append_inc = LLONG_MAX;
        bool ok = false;
        long long result = 0;
        long long end_num = nums2[nums1.size()];
        for(int i = 0;i < nums1.size();i++){
            result += fabs(nums1[i] - nums2[i]);
            if(nums1[i] <= end_num && nums2[i]>= end_num){
                ok = true;
            }
            else if(nums2[i] <= end_num && nums1[i]>= end_num){
                ok = true;
            }
            append_inc = min({append_inc,
                (long long)fabs(nums1[i] - end_num),
                (long long)fabs(nums2[i] - end_num)});
        }

        if(ok){
            return result + 1;
        }
        return result + 1 + append_inc;

    }
};
