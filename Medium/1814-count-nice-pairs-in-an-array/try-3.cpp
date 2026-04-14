/*
 * Problem #1814: Count Nice Pairs in an Array
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 16:06:05
 * Link: https://leetcode.com/problems/count-nice-pairs-in-an-array/
 */

class Solution {
public:
    int reverse(int n){
        int dum = 0;
        while(n){
            dum = dum*10 + n%10;
            n = n/10;
        }
        return dum;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, long long> ump;
        int ans = 0;
        for(int num : nums){

            int conditionVal = num - reverse(num);
            ump[conditionVal]++;
        }

        for(auto [val, freq] : ump){
            ans += ((freq*(freq-1))/2)%(int)(1e9 + 7);
            ans %= (int)(1e9 + 7);
        }
        return ans;

    }
};
