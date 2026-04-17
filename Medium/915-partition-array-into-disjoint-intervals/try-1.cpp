/*
 * Problem #915: Partition Array into Disjoint Intervals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/09/2025, 12:17:42
 * Link: https://leetcode.com/problems/partition-array-into-disjoint-intervals/
 */

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size());
        suffix[nums.size() - 1] = nums[nums.size()-1];
        prefix.push_back(nums[0]);
        for(int i = 1;i < nums.size();i++){
            prefix.push_back(max(prefix[i-1],nums[i]));
        }
        for(int j = nums.size()-2;j >=0;j--){
            suffix[j] = min(suffix[j+1],nums[j]);
        }
        for(int i = 0;i < nums.size()-1;i++){
            if(prefix[i] <= suffix[i+1]){
                return i+1;
            }
        }
        return -1;
    }
};
