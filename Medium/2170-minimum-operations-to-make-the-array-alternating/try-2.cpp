/*
 * Problem #2170: Minimum Operations to Make the Array Alternating
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 07:25:07
 * Link: https://leetcode.com/problems/minimum-operations-to-make-the-array-alternating/
 */

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> count1, count2;
        
        for(int i = 0;i < n;i += 2) count1[nums[i]]++;
        for(int i = 1;i < n;i += 2) count2[nums[i]]++;
        
        pair<int,int> a1 = {0, 0}, a2 = {0, 0};
        pair<int,int> b1 = {0, 0}, b2 = {0, 0};

        for(auto & [num , freq] : count1){
            if(a1.first < freq){
                a2 = a1;
                a1 = {freq, num};
            }
            else if(a2.first < freq){
                a2 = {freq, num};
            }
        }

        for(auto & [num , freq] : count2){
            if(b1.first < freq){
                b2 = b1;
                b1 = {freq, num};
            }
            else if(b2.first < freq){
                b2 = {freq, num};
            }
        }

        if(a1.second != b1.second) return n - a1.first - b1.first;
        return n - max(a1.first + b2.first, a2.first + b1.first);
    }
};
