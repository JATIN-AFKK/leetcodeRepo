/*
 * Problem #3541: Find Most Frequent Vowel and Consonant
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2026, 11:54:02
 * Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
 */

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
        vector<int> count(26, 0);
        int max_con = 0, max_vol = 0;
        for(char ch : s){
            if(st.count(ch)){
                count[ch - 'a']++;
                max_vol = max(max_vol, count[ch - 'a']);
            }
            else{
                count[ch - 'a']++;
                max_con = max(max_con, count[ch - 'a']);
            }
        }
        return max_vol + max_con;
    }
};
