/*
 * Problem #3527: Find the Most Common Response
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/02/2026, 11:50:17
 * Link: https://leetcode.com/problems/find-the-most-common-response/
 */

class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> up;
        int n = responses.size();

        for(int i = 0;i < n;i++){
            unordered_set<string> us;
            for(string str : responses[i]) us.insert(str);
            for(string uniqueStr : us) up[uniqueStr]++;
        }

        string ans;
        int count = 0;
        for(auto &[str, freq] : up){
            if(freq > count){
                count = freq;
                ans = str;
            }
            else if(count == freq) ans = min(ans, str);
        }
        return ans;
    }
};
