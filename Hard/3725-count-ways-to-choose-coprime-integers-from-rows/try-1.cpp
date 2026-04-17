/*
 * Problem #3725: Count Ways to Choose Coprime Integers from Rows
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/10/2025, 21:09:53
 * Link: https://leetcode.com/problems/count-ways-to-choose-coprime-integers-from-rows/
 */

class Solution {
public:
    int countCoprime(vector<vector<int>>& mat) {
        unordered_map<int,long long> dp;
        long long modulo = 1e9 + 7;
        for(int n : mat[0]){
            dp[n] += 1;
        }
        for(int row = 1;row < mat.size();row++){
            unordered_map<int,long long> temp;
            for(auto &[cur_gcd,count] : dp){
                for(int col = 0;col < mat[0].size();col++){
                    int new_gcd = gcd(cur_gcd,mat[row][col]);
                    temp[new_gcd] =(temp[new_gcd] + count )% modulo;
                }
            }
            dp = move(temp);
        }
        return dp[1];
    }
};
