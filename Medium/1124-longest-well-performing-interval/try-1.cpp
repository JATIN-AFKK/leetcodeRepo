/*
 * Problem #1124: Longest Well-Performing Interval
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/10/2025, 13:44:26
 * Link: https://leetcode.com/problems/longest-well-performing-interval/
 */

class Solution {
public:
    int longestWPI(vector<int>& hours) {
        vector<int> map;
        for(int i = 0 ;i < hours.size();i++){
            if(hours[i] > 8) map.push_back(1);
            else map.push_back(-1);
        }
        vector<int> prefix(hours.size() + 1,0);
        for(int i = 0;i < hours.size();i++) prefix[i+1] = prefix[i] + map[i];

        stack<int> st;
        for(int i = 0;i < prefix.size();i++){
            if(st.empty() || prefix[i] < prefix[st.top()]){
                st.push(i);
            }
        }
        int max_val = 0;

        for(int r = prefix.size() - 1;r >= 0; r--){
            while(!st.empty() && prefix[r] > prefix[st.top()]){
                max_val = max(max_val,r - st.top());
                st.pop();
            }
        }
        return max_val;
    }
};
