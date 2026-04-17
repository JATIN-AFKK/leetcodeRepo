/*
 * Problem #219: Contains Duplicate II
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/11/2025, 22:28:44
 * Link: https://leetcode.com/problems/contains-duplicate-ii/
 */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            if(mp.find(nums[i])!=mp.end() && (i - mp[nums[i]] <= k)){
                return true;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return false;
    }
};
