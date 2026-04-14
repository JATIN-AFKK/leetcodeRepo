/*
 * Problem #3137: Minimum Number of Operations to Make Word K-Periodic
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/02/2026, 23:59:49
 * Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-word-k-periodic/
 */

class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string, int> count;
        for(int i = 0;i < word.size();i++){
            if(i%k != 0) continue;
            count[word.substr(i, k)]++;
        }

        int max_count = INT_MIN;
        for(auto &[str, freq] : count){
            max_count = max(max_count, freq);
        }
        return word.size()/k - max_count;
    }
};
