/*
 * Problem #2094: Finding 3-Digit Even Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 00:59:34
 * Link: https://leetcode.com/problems/finding-3-digit-even-numbers/
 */

class Solution {
public:
    set<int> numst;
    void solve(vector<int> & digits, vector<int> & used, int curNum, int depth){
        if(depth == 3){
            if(curNum % 2 == 0) numst.insert(curNum);
            return;
        }

        for(int i = 0;i < digits.size(); i++){
            if(used[i] == 1) continue;
            if(depth == 0 && digits[i] == 0) continue;

            used[i] = 1;
            solve(digits, used, curNum * 10 + digits[i] , depth + 1);
            used[i] = 0;
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> used(digits.size(), 0);
        solve(digits, used, 0, 0);
        return vector<int> (numst.begin(), numst.end());
    }
};
