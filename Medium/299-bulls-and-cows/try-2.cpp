/*
 * Problem #299: Bulls and Cows
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 12:58:15
 * Link: https://leetcode.com/problems/bulls-and-cows/
 */

class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0,cow = 0;
        vector<int> smp(10,0),gmp(10,0);
        for(int i = 0;i < secret.size();i++){
            if(secret[i] == guess[i]){
                bull++;
            }
            else{
                smp[secret[i] - '0']++;
                gmp[guess[i] - '0']++;
            }
        }
        for(int i = 0;i < 10;i++){
            cow += min(gmp[i],smp[i]);
        }
        return to_string(bull) + 'A' + to_string(cow) + 'B';
    }
};
