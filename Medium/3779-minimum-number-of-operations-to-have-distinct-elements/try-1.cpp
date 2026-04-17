/*
 * Problem #3779: Minimum Number of Operations to Have Distinct Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/12/2025, 20:32:47
 * Link: https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements/
 */

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int i = 0;
        while(!mp.empty() && mp.size() != nums.size() - i){
            mp[nums[i]]--;
            if(mp[nums[i]] == 0) mp.erase(nums[i]);
            i++;
        }
        int removedCount = i + 1;
        removedCount += removedCount%3;

        return removedCount/3;
    }
};
