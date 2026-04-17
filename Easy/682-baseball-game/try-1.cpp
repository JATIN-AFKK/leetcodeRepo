/*
 * Problem #682: Baseball Game
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 10:05:44
 * Link: https://leetcode.com/problems/baseball-game/
 */

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int result = 0;
        for(auto op : operations){
            if(op == "C"){
                st.pop();
            }
            else if(op == "D"){
                st.push(st.top()*2);
            }
            else if(op == "+"){
                int a1 = st.top();
                st.pop();
                int a2 = st.top();
                st.pop();
                st.push(a2);
                st.push(a1);
                st.push(a1 + a2);
            }
            else{
                st.push(stoi(op));
            }
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        return result;
    }
};
