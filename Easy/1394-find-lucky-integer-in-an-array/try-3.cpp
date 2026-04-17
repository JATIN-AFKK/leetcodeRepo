/*
 * Problem #1394: Find Lucky Integer in an Array
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 14:27:34
 * Link: https://leetcode.com/problems/find-lucky-integer-in-an-array/
 */

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> ump;
        for(int ele : arr) ump[ele]++;

        int ans = -1;
        for(auto p : ump){
            if(p.first == p.second) ans = max(ans, p.first);
        }
        return ans;
    }
};
