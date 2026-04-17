/*
 * Problem #3659: Partition Array Into K-Distinct Groups
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/08/2025, 23:03:27
 * Link: https://leetcode.com/problems/partition-array-into-k-distinct-groups/
 */

class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size() % k != 0) return false;
        map<int,int> mp;
        int it = INT_MIN;
        for(auto num : nums){
            mp[num]++;
            it = max(it,mp[num]);
        }
        
        if(it > nums.size()/k){
            return false;
        }
        else{
            cout<<it<<" "<<it;
            return true;
        }
        
        
    }
};
