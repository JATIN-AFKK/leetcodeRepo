/*
 * Problem #3335: Total Characters in String After Transformations I
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2026, 18:24:50
 * Link: https://leetcode.com/problems/total-characters-in-string-after-transformations-i/
 */

class Solution {
public:
    using Materix = vector<vector<long long>>;
    int MOD = 1e9 + 7;
    int N = 26;
    
    Materix multiply(Materix &a, Materix &b){
        Materix result(N, vector<long long>(N, 0));

        for(int i = 0;i < N;i++){
            for(int k = 0;k < N;k++){
                for(int j = 0;j < N;j++){
                    if(a[i][k] == 0) continue;
                    result[i][j] += a[i][k]*b[k][j];
                    result[i][j] %= MOD;
                }
            }
        }
        return result;
    }

    Materix MPower(Materix a, long long base){
        Materix result(N, vector<long long>(N, 0));
        for(int i = 0;i < N;i++) result[i][i] = 1;

        while(base){
            if(base & 1) result = multiply(result, a);
            a = multiply(a, a);

            base >>= 1;
        }
        return result;
        
    }
    int lengthAfterTransformations(string s, int t) {
        Materix transform(N, vector<long long> (N, 0));
        for(int i = 1;i < N;i++) transform[i][i - 1] = 1;
        transform[0][25] = 1;
        transform[1][25] = 1;

        vector<long long> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        transform = MPower(transform, t);

        long long ans = 0;
        for(int i = 0;i < N;i++){
            for(int j = 0;j < N;j++){
                ans += (transform[i][j] * count[j])%MOD;
                ans %= MOD;
            }
        }
        return ans;
    }
};
