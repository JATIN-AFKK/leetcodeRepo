/*
 * Problem #2269: Find the K-Beauty of a Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 19:55:10
 * Link: https://leetcode.com/problems/find-the-k-beauty-of-a-number/
 */

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans = 0;
        string numStr = to_string(num);
        for(int i = 0;i < numStr.size() - k + 1;i++){
            string substring = numStr.substr(i, k);
            int subNum = stoi(substring);

            if(gcd(num, subNum) == subNum) ans++;
        }
        return ans;
    }
};
