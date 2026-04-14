/*
 * Problem #1356: Sort Integers by The Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 25/02/2026, 12:51:51
 * Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
 */

class Solution {
public:
    bool comp(int a, int b){
        if(__builtin_popcount(a) != __builtin_popcount(b)) return __builtin_popcount(a) > __builtin_popcount(b);
        return a > b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0;i < n;i++){
            int j = i - 1;
            int key = arr[i];
            while(j > -1 && comp(arr[j], key)){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        return arr;
    }
};
