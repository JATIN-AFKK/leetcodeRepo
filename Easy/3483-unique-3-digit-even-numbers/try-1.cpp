/*
 * Problem #3483: Unique 3-Digit Even Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 10:01:49
 * Link: https://leetcode.com/problems/unique-3-digit-even-numbers/
 */

class Solution {
public:
    unordered_set<int> st;
    void solve(vector<int> & digits, vector<int> & used, int depth, int curNum){
        if(depth == 3){
            if(curNum % 2 == 0) st.insert(curNum);
            return;
        }

        for(int i = 0;i < digits.size() ; i++){
            if(used[i] == 1) continue;
            if(depth == 0 && digits[i] == 0) continue;


            used[i] = 1;
            solve(digits, used, depth + 1, curNum * 10 + digits[i]);
            used[i] = 0;
        }
    }
    int totalNumbers(vector<int>& digits) {
        vector<int> used(digits.size(), 0);
        solve(digits, used, 0, 0);
        return st.size();
    }
};
