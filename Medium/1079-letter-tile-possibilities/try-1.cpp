/*
 * Problem #1079: Letter Tile Possibilities
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 00:18:03
 * Link: https://leetcode.com/problems/letter-tile-possibilities/
 */

class Solution {
public:
    void solve(string str, vector<bool> &chosen, unordered_set<string> & store, string cur){
        store.insert(cur);
        for(int i = 0;i < chosen.size();i++){
            if(chosen[i]) continue;

            chosen[i] = true;
            cur.push_back(str[i]);

            solve(str, chosen, store, cur);
            
            cur.pop_back();
            chosen[i] = false;
        }
    }
    int numTilePossibilities(string tiles) {
        int n = tiles.size();
        vector<bool> isChosen(n, false);

        unordered_set<string> store;
        solve(tiles, isChosen, store, "");
        return store.size() - 1;
    }
};
