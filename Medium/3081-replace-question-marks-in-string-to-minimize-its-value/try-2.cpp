/*
 * Problem #3081: Replace Question Marks in String to Minimize Its Value
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/02/2026, 08:14:55
 * Link: https://leetcode.com/problems/replace-question-marks-in-string-to-minimize-its-value/
 */

class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int> count(26, 0);
        vector<int> questionMark;

        for(int i = 0;i < s.size();i++){
            if(s[i] == '?') questionMark.push_back(i);
            else count[s[i] - 'a']++;
        }
        reverse(questionMark.begin(), questionMark.end());

        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i = 0;i < 26;i++){
            pq.push({count[i], i});
        }
        string chosen;
        while(!questionMark.empty()){
            auto [freq, chInt] = pq.top();
            pq.pop();

            chosen.push_back(chInt + 'a');

            pq.push({freq + 1, chInt});

            questionMark.pop_back();
        }

        sort(chosen.begin(), chosen.end());
        int cur = 0;
        for(int i = 0;i < s.size(); i++){
            if(s[i] != '?') continue;
            s[i] = chosen[cur];
            cur++;
        }
        return s;

    }
};
