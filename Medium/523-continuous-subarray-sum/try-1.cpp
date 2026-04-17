/*
 * Problem #523: Continuous Subarray Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 16:24:31
 * Link: https://leetcode.com/problems/continuous-subarray-sum/
 */

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> up;
        up[0] = -1;
        int sum = 0;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            int n = sum % k;
            if(up.find(n) != up.end()){
                if(i - up[n] > 1) return true;
            }
            else{
                up[n] = i;
            }
        }
        return false;
    }
};
