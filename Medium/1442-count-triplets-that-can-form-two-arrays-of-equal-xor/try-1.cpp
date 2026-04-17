/*
 * Problem #1442: Count Triplets That Can Form Two Arrays of Equal XOR
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 22:40:35
 * Link: https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
 */

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int xr = 0,res = 0;
        vector<int> prefix(arr.size() + 1,0);

        for(int i = 0;i < arr.size();i++){
            prefix[i+1] = prefix[i]^arr[i];
        }

        for(int i = 0;i < arr.size();i++){
            for(int j = i+1;j < arr.size();j++){
                if(prefix[i] == prefix[j + 1]) res += j - i;
            }
        }
        return res;
    }
};
