/*
 * Problem #2284: Sender With Largest Word Count
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 13:19:24
 * Link: https://leetcode.com/problems/sender-with-largest-word-count/
 */

class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string , int> up;

        int n = messages.size();
        for(int i = 0;i < n;i++){
            string message = messages[i], word;
            string sender = senders[i];

            
            int count = 1;
            for(char ch : message) if(ch == ' ') count++;
            up[sender] += count;
        }

        string ans = "";
        int f = 0;

        for(auto [sender, count] : up){
            if(f == 0 || count > f ){
                ans = sender;
                f = count;
            }
            else if(f == count){
                ans = max(ans, sender);
            }

        }
        return ans;
    }
};
