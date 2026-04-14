/*
 * Problem #1497: Check If Array Pairs Are Divisible by k
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2026, 16:17:40
 * Link: https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/
 */

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if(k == 1) return true;
        vector<int> freq(k, 0);

        for(int num : arr){
            int modVal = num % k;
            modVal = (modVal + k) % k;

            int want = (k - modVal) % k;

            if(freq[want] > 0) --freq[want];
            else freq[modVal]++;
        }

        for(int i = 0;i < k;i++) if(freq[i] != 0) return false;
        return true;
    }
};
