/*
 * Problem #914: X of a Kind in a Deck of Cards
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/01/2026, 17:59:28
 * Link: https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
 */

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count;
        for(int num : deck){
            count[num]++;
        }
        int ans = count[deck[0]];
        for(auto &p : count){
            ans = gcd(ans, p.second);
        }
        return ans > 1;
    }
};
