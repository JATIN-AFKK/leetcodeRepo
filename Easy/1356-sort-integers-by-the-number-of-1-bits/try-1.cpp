/*
 * Problem #1356: Sort Integers by The Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 13:58:19
 * Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
 */

class Solution {
public:
    bool condition(int a, int b){
        int ca = __builtin_popcount(a);
        int cb = __builtin_popcount(b);

        if(ca != cb) return ca < cb;
        else return a < b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0;i < n;i++){
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && !condition(arr[j], key)){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        return arr;
    }
};
