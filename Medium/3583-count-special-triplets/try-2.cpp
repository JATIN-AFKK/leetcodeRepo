/*
 * Problem #3583: Count Special Triplets
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 25/02/2026, 12:30:34
 * Link: https://leetcode.com/problems/count-special-triplets/
 */

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int MOD = 1e9 +7;
        long long ans = 0;
        unordered_map<int,int> totalCount, up;
        for(int num : nums) totalCount[num]++;

        for(int num : nums){
            totalCount[num]--;
            int need = 2*num;

            ans += (1ll * up[need] * totalCount[need]);
            up[num]++;
            ans %= MOD;
        }
        return ans;
    }
};
