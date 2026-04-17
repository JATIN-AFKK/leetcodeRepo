/*
 * Problem #2347: Best Poker Hand
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:51:00
 * Link: https://leetcode.com/problems/best-poker-hand/
 */

class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        vector<int> sCount(4, 0);
        vector<int> rCount(13, 0);
        for(char ch : suits) sCount[ch - 'a']++;

        int max_count = 0;
        for(int i = 0;i < 4;i++) if(sCount[i] == suits.size()) return "Flush";
        for(int r : ranks){
            rCount[r - 1]++;
            max_count = max(max_count, rCount[r - 1]);
        }
        if(max_count >= 3) return "Three of a Kind";
        else if(max_count == 2) return "Pair";
        else return "High Card";
    }
};
