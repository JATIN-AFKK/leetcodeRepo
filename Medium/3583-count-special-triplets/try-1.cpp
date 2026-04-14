/*
 * Problem #3583: Count Special Triplets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/02/2026, 12:24:07
 * Link: https://leetcode.com/problems/count-special-triplets/
 */

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> totalCount;
        int MOD = 1e9 +7;
        for(int num : nums) totalCount[num]++;
        long long ans = 0;
        unordered_map<int, int> up;
        for(int num : nums){
            if(num == 0) continue;
            int need = 2*num;

            ans += ((long long)up[need] * (totalCount[need]- up[need]));
            up[num]++;
            ans %= MOD;
        }
        long long nn = totalCount[0] % MOD;
        nn = nn * (1ll * (totalCount[0] -  1)) % MOD;
        nn = nn * (1ll * (totalCount[0] -  2)) % MOD;

        ans += (nn * 166666668) % MOD;



        return ans;


    }
};
