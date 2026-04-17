/*
 * Problem #2586: Count the Number of Vowel Strings in Range
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 18:45:41
 * Link: https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/
 */

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int res = 0;
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
        for(int i = left; i <= right;i++){
            if(st.count(words[i][0]) && st.count(words[i].back())) res++;
        }
        return res;
    }
};
