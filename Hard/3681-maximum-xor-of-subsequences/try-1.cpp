/*
 * Problem #3681: Maximum XOR of Subsequences
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/03/2026, 19:32:20
 * Link: https://leetcode.com/problems/maximum-xor-of-subsequences/
 */

class Solution {
public:
    int maxXorSubsequences(vector<int>& nums) {
        vector<int> basisVector(32, 0);
        for(int num : nums){
            int pos = 31;
            while(pos >= 0){
                if((num & (1 << pos)) == 0) {
                    pos--;
                    continue;
                }

                if(basisVector[pos] == 0){
                    basisVector[pos] = num;
                    break;
                }
                else num ^= basisVector[pos];
                pos--;
            }
        }
        int ans = 0;
        for(int i = 31;i >= 0; i--){
            if((ans ^ basisVector[i]) > ans) ans ^= basisVector[i];
        }
        return ans;
    }
};
