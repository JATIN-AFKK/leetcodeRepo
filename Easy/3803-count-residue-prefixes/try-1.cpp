/*
 * Problem #3803: Count Residue Prefixes
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/01/2026, 17:50:44
 * Link: https://leetcode.com/problems/count-residue-prefixes/
 */

class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<int> us;
        int count = 0;
        for(int i = 0;i < s.size();i++){
            us.insert(s[i]);
            if(us.size() == (i+1)%3) count++;
        }
        return count;
    }
};
