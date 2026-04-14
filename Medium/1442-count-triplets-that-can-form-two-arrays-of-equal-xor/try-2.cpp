/*
 * Problem #1442: Count Triplets That Can Form Two Arrays of Equal XOR
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 27/03/2026, 20:16:03
 * Link: https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
 */

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre(n + 1, 0);
        for(int i = 0;i < n; i++){
            pre[i + 1] = pre[i] ^ arr[i];

        }
        int count = 0;
        for(int i = 0;i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                for(int k = j ;k < n; k++){
                    if(pre[i] == pre[k + 1]) count++;
                }
            }
        }
        return count;

    }
};
