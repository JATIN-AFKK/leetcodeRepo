/*
 * Problem #2839: Check if Strings Can be Made Equal With Operations I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/03/2026, 23:40:07
 * Link: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
 */

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1.size() != s2.size()) return false;
        int n = s1.size();

        vector<int> count1(26, 0), count2(26, 0);
        for(int i = 0;i < n; i += 2){
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        if(count1 != count2) return false;

        for(int i = 1;i < n; i += 2){
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        if(count1 != count2) return false;
        return true;
    }
};
