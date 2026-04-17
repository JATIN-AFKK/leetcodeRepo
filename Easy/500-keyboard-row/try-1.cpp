/*
 * Problem #500: Keyboard Row
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 09:14:41
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
            int a1 = 0,a2 = 0,a3 = 0;
            for(auto ch : words[i]){
                char c = tolower(ch);
                if(mp[c] == 1){
                    a1+=1;
                }
                else if(mp[c] == 2){
                    a2 += 1;
                }
                else{
                    a3 += 1;
                }
            }
            if(words[i].size() == a1 || words[i].size() == a2 || words[i].size() == a3){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};
