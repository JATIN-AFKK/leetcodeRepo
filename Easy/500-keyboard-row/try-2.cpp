/*
 * Problem #500: Keyboard Row
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 09:22:04
 * Link: https://leetcode.com/problems/keyboard-row/
 */

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mp;
        vector<string> result;
        for(auto c : "qwertyuiop"){
            mp[c] = 1;
        }
        for(auto c : "asdfghjkl"){
            mp[c] = 2;
        }
        for(auto c : "zxcvbnm"){
            mp[c] = 3;
        }

        for(int i = 0;i < words.size();i++){
            int row = mp[tolower(words[i][0])];
            bool ok = true;
            for(auto ch : words[i]){
                if(row != mp[tolower(ch)]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};
