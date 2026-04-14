/*
 * Problem #3016: Minimum Number of Pushes to Type Word II
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/02/2026, 18:56:06
 * Link: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
 */

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> count(26, 0);
        for(char ch : word) count[ch - 'a']++;

        sort(count.begin(), count.end(), greater<int> ());

        int ops = 0;
        vector<int> key(8, 0);
        int curKey = 0;

        for(int i = 0;i < 26;i++){
            if(count[i] == 0) break;
            key[curKey]++;
            ops += key[curKey]*count[i];
            curKey = (curKey + 1) % 8;
        }
        return ops;

    }
};
