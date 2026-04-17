/*
 * Problem #884: Uncommon Words from Two Sentences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/01/2026, 17:46:14
 * Link: https://leetcode.com/problems/uncommon-words-from-two-sentences/
 */

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp1, mp2;
        vector<string> vec;

        stringstream ss1(s1), ss2(s2);

        string t1;
        while(ss1 >> t1) mp1[t1]++;
        string t2;
        while(ss2 >> t2) mp2[t2]++;

        for(auto p : mp1){
            if(!mp2.count(p.first) && p.second == 1) vec.push_back(p.first);
        }
        for(auto p : mp2){
            if(!mp1.count(p.first) && p.second == 1) vec.push_back(p.first);
        }
        return vec;

    }
};
