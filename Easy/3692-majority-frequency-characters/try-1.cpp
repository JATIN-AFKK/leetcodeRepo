/*
 * Problem #3692: Majority Frequency Characters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/02/2026, 14:26:08
 * Link: https://leetcode.com/problems/majority-frequency-characters/
 */

class Solution {
public:
    string majorityFrequencyGroup(string s) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        unordered_map<int, vector<char>> group;
        for(int i = 0;i < 26;i++){
            if(count[i] > 0) group[count[i]].push_back('a' + i);
        }
        int bestSize = 0;
        int bestFreq = 0;
        for(auto &p : group){
            int k = p.first;
            int size = p.second.size();

            if(size > bestSize || (size == bestSize && k > bestFreq)){
                bestSize = size;
                bestFreq = k;
            }
        }
        string ans;
        for(char ch : group[bestFreq]) ans.push_back(ch);
        return ans;
    }
};
