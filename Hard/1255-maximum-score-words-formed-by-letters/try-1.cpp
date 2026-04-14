/*
 * Problem #1255: Maximum Score Words Formed by Letters
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 21:30:36
 * Link: https://leetcode.com/problems/maximum-score-words-formed-by-letters/
 */

class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int n = words.size(), ans = 0;
        int subSetSize = (1 << n) - 1;

        vector<int> freq(26, 0);
        for(char ch : letters) freq[ch - 'a']++;

        for(int i = 1;i <= subSetSize;i++){
            vector<int> count(26, 0);
            int i_dummy = i, position = -1, cur = 0;
            bool isValid = true;
            
            while(i_dummy){
                ++position;
                if((i_dummy & 1) == 0){
                    i_dummy /= 2;
                    continue;
                }
                for(char ch : words[position]){
                    count[ch - 'a']++;
                    cur += score[ch - 'a'];

                    if(freq[ch - 'a'] < count[ch - 'a']){
                        isValid = false;
                        break;
                    }
                }
                if(!isValid) break;
                i_dummy /= 2;
            }     
            if(isValid) ans = max(ans, cur);
        }
        return ans;
    }
};
