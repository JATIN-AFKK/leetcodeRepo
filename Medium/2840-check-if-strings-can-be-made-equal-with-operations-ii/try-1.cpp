/*
 * Problem #2840: Check if Strings Can be Made Equal With Operations II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/03/2026, 09:21:25
 * Link: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
 */

class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> count1(26, 0), count2(26, 0);
        if(s1.size() != s2.size()) return false;
        int n = s1.size();

        for(int i = 0;i < n; i += 2){
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        if(count1 != count2) return false;

        for(int i = 1;i < n; i += 2){
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        
        return count1 == count2;
    }
};
