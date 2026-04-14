/*
 * Problem #3297: Count Substrings That Can Be Rearranged to Contain a String I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 12:06:00
 * Link: https://leetcode.com/problems/count-substrings-that-can-be-rearranged-to-contain-a-string-i/
 */

class Solution {
public:
    bool valid(vector<int> & cr, vector<int> & r){
        for(int i = 0;i < 26;i++) if(r[i] > cr[i]) return false;
        return true;
    }
    long long validSubstringCount(string word1, string word2) {
        vector<int> req(26, 0), curReq(26, 0);
        long long ans = 0;

        for(char ch : word2) req[ch - 'a']++;

        int l = 0;
        for(int e = 0;e < word1.size(); e++){
            curReq[word1[e] - 'a']++;

            while(valid(curReq, req)){
                ans += word1.size() - e;
                curReq[word1[l] - 'a']--;
                l++;
            }
        }
        return ans;

    }
};
