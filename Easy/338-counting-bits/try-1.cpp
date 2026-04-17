/*
 * Problem #338: Counting Bits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 23:21:53
 * Link: https://leetcode.com/problems/counting-bits/
 */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec;
        for(int i = 0;i < n + 1;i++){
            int res = 0,num = i;
            while(num){
                num &= (num-1);
                res++;
            }
            vec.push_back(res);
        }
        return vec;
    }
};
