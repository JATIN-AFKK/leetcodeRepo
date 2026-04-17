/*
 * Problem #1394: Find Lucky Integer in an Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 14:25:41
 * Link: https://leetcode.com/problems/find-lucky-integer-in-an-array/
 */

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int ele : arr) mp[ele]++;

        int ans = -1;
        for(auto p : mp){
            if(p.first == p.second) ans = p.first;
        }
        return ans;
    }
};
