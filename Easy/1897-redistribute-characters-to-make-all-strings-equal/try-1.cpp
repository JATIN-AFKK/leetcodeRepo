/*
 * Problem #1897: Redistribute Characters to Make All Strings Equal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 11:05:43
 * Link: https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/
 */

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> vec(26, 0);
        int n = words.size();

        for(string word : words) for(char ch : word) vec[ch - 'a']++;

        for(int count : vec) if(count % n != 0) return false;
        return true;
    }
};
