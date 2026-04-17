/*
 * Problem #804: Unique Morse Code Words
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 11:20:10
 * Link: https://leetcode.com/problems/unique-morse-code-words/
 */

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(auto word : words){
            string morse = "";
            for(auto ch : word) morse += table[ch - 'a'];
            st.insert(morse);
        }
        return st.size();
        
    }
};
