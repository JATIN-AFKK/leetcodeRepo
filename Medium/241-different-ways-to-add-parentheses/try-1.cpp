/*
 * Problem #241: Different Ways to Add Parentheses
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 17:00:39
 * Link: https://leetcode.com/problems/different-ways-to-add-parentheses/
 */

class Solution {
public:
    unordered_set<char> st = {'+', '-', '*'};
    vector<int> dvc(string expression){
        vector<int> ans;
        for(int i = 0;i < expression.size(); i++){
            if(st.count(expression[i])){
                vector<int> left = dvc(expression.substr(0, i));
                vector<int> right = dvc(expression.substr(i + 1));
                for(int l : left){
                    for(int r : right){
                        if(expression[i] == '+') ans.push_back(l + r);
                        else if(expression[i] == '*') ans.push_back(l * r);
                        else ans.push_back(l - r);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(expression));
        return ans;
    }
    vector<int> diffWaysToCompute(string expression) {
        return dvc(expression);
    }
};
