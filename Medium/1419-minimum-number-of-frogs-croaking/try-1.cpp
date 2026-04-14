/*
 * Problem #1419: Minimum Number of Frogs Croaking
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 14:58:13
 * Link: https://leetcode.com/problems/minimum-number-of-frogs-croaking/
 */

class Solution {
public:
    bool isEqual(vector<int> vec){
        for(int i = 1;i < vec.size();i++) if(vec[i] != vec[i-1]) return false;
        return true;
    }
    bool isValid(vector<int> vec){
        for(int i = 1;i < vec.size();i++) if(vec[i] > vec[i-1]) return false;
        return true;
    }
    int minNumberOfFrogs(string croakOfFrogs) {
        unordered_map<char, int> up = {
            {'c', 0},
            {'r', 1},
            {'o', 2},
            {'a', 3},
            {'k', 4}
        };                                                                
        vector<int> count(5, 0);

        int ans = 0;
        for(char ch : croakOfFrogs){
            if(up.find(ch) == up.end()) return -1;
            else count[up[ch]]++;

            if(isValid(count) == false) return -1;
            ans = max(ans, count[0] - count[4]);
        }

        if(isEqual(count)) return ans;
        return -1;
    }
};

// 1 0 0 0 0
// 1 1 1 1 1  ans = 1;
// 2 2 2 2 2  ans = 2-1 = 1
