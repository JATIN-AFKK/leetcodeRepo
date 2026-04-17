/*
 * Problem #1876: Substrings of Size Three with Distinct Characters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 10:59:06
 * Link: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
 */

class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        int distinct = 0;
        int k = 3;

        vector<int> vec(26, 0);

        for(int i = 0;i < s.size();i++){
            if(++vec[s[i] - 'a'] == 1) distinct++;
            if(i >= k){
                if(--vec[s[i - k] - 'a'] == 0) distinct--;
            }

            if(distinct == k) ans++;
        }
        return ans;
    }
};
