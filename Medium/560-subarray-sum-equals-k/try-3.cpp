/*
 * Problem #560: Subarray Sum Equals K
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2025, 12:34:53
 * Link: https://leetcode.com/problems/subarray-sum-equals-k/
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        umap[0] = 1;
        int j,s = 0, result = 0;
        for(j = 0;j < nums.size();j++){
            s += nums[j];
            if(umap.find(s - k) != umap.end()){
                result += umap[s-k];
            }
            umap[s]++;
        }
        return result;
    }
};
