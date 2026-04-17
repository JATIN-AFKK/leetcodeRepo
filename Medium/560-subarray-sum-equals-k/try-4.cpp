/*
 * Problem #560: Subarray Sum Equals K
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 06:42:09
 * Link: https://leetcode.com/problems/subarray-sum-equals-k/
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> up;
        int count = 0,sum = 0;
        up[sum] = 1;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            if(up.find(sum - k)!= up.end()){
                count += up[sum - k];
            }
            up[sum]++;
        }
        return count;
    }
};
