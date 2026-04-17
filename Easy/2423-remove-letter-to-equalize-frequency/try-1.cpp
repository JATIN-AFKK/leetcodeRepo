/*
 * Problem #2423: Remove Letter To Equalize Frequency
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 18:09:31
 * Link: https://leetcode.com/problems/remove-letter-to-equalize-frequency/
 */

class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> freq(26, 0);
        unordered_map<int, int> mp;

        for(int i = 0;i < word.size();i++) freq[word[i] - 'a']++;
        for(int count : freq) if(count != 0) mp[count]++;

        if(mp.size() > 2) return false;
        else if(mp.size() == 1) return mp.begin()->first == 1 | mp.begin()->second == 1;
        auto it = mp.begin();
        int f1 = it->first, c1 = it->second;
        ++it;
        int f2 = it->first, c2 = it->second;
        if (f1 > f2) {
            swap(f1, f2);
            swap(c1, c2);
        }
        if (f1 == 1 && c1 == 1) return true;
        if (f2 == f1 + 1 && c2 == 1) return true;
        return false;
    }
};
