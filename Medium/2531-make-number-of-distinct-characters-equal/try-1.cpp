/*
 * Problem #2531: Make Number of Distinct Characters Equal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 22:06:27
 * Link: https://leetcode.com/problems/make-number-of-distinct-characters-equal/
 */

class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int> count1(26, 0);
        vector<int> count2(26, 0);

        int dis1 = 0, dis2 = 0;
        for(char ch : word1) if(++count1[ch - 'a'] == 1) dis1++;
        for(char ch : word2) if(++count2[ch - 'a'] == 1) dis2++;

        for(int i = 0;i < 26;i++){
            for(int j = 0;j < 26;j++){
                if(count1[i] == 0 || count2[j] == 0) continue;
                int cdis1 = dis1, cdis2 = dis2;
                if(--count1[i] == 0) cdis1--;
                if(++count1[j] == 1) cdis1++;
                if(--count2[j] == 0) cdis2--;
                if(++count2[i] == 1) cdis2++;

                if(cdis1 == cdis2) return true;

                ++count1[i] ;
                --count1[j] ;
                ++count2[j] ;
                --count2[i] ;
            }
        }
        return false;
    }
};
