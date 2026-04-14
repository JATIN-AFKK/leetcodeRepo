/*
 * Problem #3890: Integers With Multiple Sum of Two Cubes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 16:45:11
 * Link: https://leetcode.com/problems/integers-with-multiple-sum-of-two-cubes/
 */

class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        int nn = cbrt(n);
        unordered_map<int,int> up;
        vector<int> ans;
        for(int i = 1;i <= nn; i++){
            for(int j = i + 1; j <= nn; j++){
                if(i * i * i + j * j * j > n) break;
                else up[i * i * i + j * j * j]++;
            }
        }
        for(auto [val, count] : up) if(count > 1)ans.push_back(val);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
