/*
 * Problem #1178: Number of Valid Words for Each Puzzle
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/10/2025, 11:44:08
 * Link: https://leetcode.com/problems/number-of-valid-words-for-each-puzzle/
 */

class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(string word : words){
            int encode = 0;
            for(char ch : word) encode |= (1 << (ch - 'a'));
            mp[encode]++;
        }
        for(string puzzle : puzzles){
            int encode2 = 0;
            for(char ch : puzzle) encode2 |= (1<<(ch - 'a'));
            int sub = encode2,count = 0;
            int first = 1 <<(puzzle[0] -'a');
            while(sub){
                if(sub&first){
                    count += mp[sub];
                }
                sub = (sub - 1)&encode2;
            }
            result.push_back(count);
        }
        return result;
        
    }
};
