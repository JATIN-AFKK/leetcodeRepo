/*
 * Problem #299: Bulls and Cows
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 12:52:40
 * Link: https://leetcode.com/problems/bulls-and-cows/
 */

class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0,cow = 0;
        unordered_map<char,int> smp,gmp;
        for(int i = 0;i < secret.size();i++){
            if(secret[i] == guess[i]){
                bull++;
            }
            else{
                smp[secret[i]]++;
                gmp[guess[i]]++;
            }
        }
        for(auto &[ch,count] : gmp){
            cow += min(gmp[ch],smp[ch]);
        }
        return to_string(bull) + 'A' + to_string(cow) + "B";
    }
};
