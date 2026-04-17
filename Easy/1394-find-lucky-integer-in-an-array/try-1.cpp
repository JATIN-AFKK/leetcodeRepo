/*
 * Problem #1394: Find Lucky Integer in an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 14:23:50
 * Link: https://leetcode.com/problems/find-lucky-integer-in-an-array/
 */

class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> count(501, 0);
        for(int ele : arr) count[ele]++;

        for(int i = 500 ; i >= 1;i--){
            if(i == count[i]) return i;
        }
        return -1;
    }
};
