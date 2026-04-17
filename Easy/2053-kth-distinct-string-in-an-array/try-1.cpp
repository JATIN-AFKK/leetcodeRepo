/*
 * Problem #2053: Kth Distinct String in an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 11:56:56
 * Link: https://leetcode.com/problems/kth-distinct-string-in-an-array/
 */

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> ump;
        for(string str : arr) ump[str]++;

        int position = 0;
        for(string str : arr){
            if(ump[str] == 1) position++;
            if(position == k) return str;
        }
        return "";
    }
};
