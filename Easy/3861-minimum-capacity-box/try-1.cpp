/*
 * Problem #3861: Minimum Capacity Box
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/03/2026, 00:18:45
 * Link: https://leetcode.com/problems/minimum-capacity-box/
 */

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int index = -1, cap = INT_MAX;
        for(int i = 0;i < capacity.size(); i++){
            if(capacity[i] < itemSize) continue;

            if(cap > capacity[i]){
                cap = capacity[i];
                index = i;
            }
        }
        return index;
    }
};
