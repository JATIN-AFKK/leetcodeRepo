/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 22:52:15
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vec(26,0);
        for(auto i : s){
            vec[i-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(vec[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
