/*
 * Problem #3679:  Minimum Discards to Balance Inventory
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2025, 21:47:35
 * Link: https://leetcode.com/problems/minimum-discards-to-balance-inventory/
 */

class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        unordered_map<int,int> up;
        vector<bool> keep(arrivals.size());
        int result = 0;
        for(int i = 0;i < arrivals.size();i++){
            if(i >= w && keep[i-w]){
                up[arrivals[i-w]]--;
                keep[i-w] = false;
            }

            if(up[arrivals[i]] < m){
                up[arrivals[i]]++;
                keep[i] = true;
            }
            else{
                keep[i] = false;
                result++;
            }
        }
        return result;
    }
};
