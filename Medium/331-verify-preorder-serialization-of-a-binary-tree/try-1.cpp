/*
 * Problem #331: Verify Preorder Serialization of a Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/03/2026, 12:34:43
 * Link: https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/
 */

class Solution {
public:
    bool isValidSerialization(string preorder) {
        stack<string> st;
        stringstream ss(preorder);
        string val;
        while(getline(ss, val, ',')){
            st.push(val);

            while(st.size() > 2 && st.top() == "#"){
                auto first = st.top();
                st.pop();

                auto second = st.top();
                st.pop();

                auto third = st.top();
                st.pop();

                if(second == "#" && third != "#") st.push("#");
                else if(second == "#" && third == "#") return false;
                else{
                    st.push(third);
                    st.push(second);
                    st.push(first);
                    break;
                }
            }
            
        }
        auto ch = st.top();
        st.pop();

        return ch == "#" && st.empty();
    }
};
