/*
 * Problem #532: K-diff Pairs in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/04/2026, 11:22:34
 * Link: https://leetcode.com/problems/k-diff-pairs-in-an-array/
 */

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        set<pair<int,int>> store;
        set<int> check;
        for(int i = 0;i < n; i++){
            if(check.count(nums[i] - k)) store.insert({nums[i] - k, nums[i]});
            if(check.count(nums[i] + k)) store.insert({nums[i],nums[i] + k});

            check.insert(nums[i]);
        }
        for(auto [a, b] : store) cout << a << " " << b << endl;
        return (int)store.size();
    }
};
