/*
 * Problem #3144: Minimum Substring Partition of Equal Character Frequency
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/02/2026, 20:49:35
 * Link: https://leetcode.com/problems/minimum-substring-partition-of-equal-character-frequency/
 */

class Solution {
public:
    bool equal(vector<int> &vec){
        int j = 0;
        while(j < vec.size() && vec[j] == 0) j++;
        for(int i = j + 1; i < vec.size(); i++){
            if(vec[i] == 0) continue;
            if(vec[i] != vec[j]) return false;
        }
        return true;
    }

    int minimumSubstringsInPartition(string s) {
        int n = s.size();
        vector<int> dp(n + 1, INT_MAX);

        dp[0] = 0;
        dp[1] = 1;

        for(int i = 1; i < n; i++){
            vector<int> count(26, 0);
            for(int j = i; j >= 0; j--){
                count[s[j] - 'a']++;
                if(equal(count)) 
                    dp[i + 1] = min(dp[j] + 1,dp[i + 1]);
            }
        }

        return dp[n];
    }
};
