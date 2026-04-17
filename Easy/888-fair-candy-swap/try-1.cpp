/*
 * Problem #888: Fair Candy Swap
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 22:39:54
 * Link: https://leetcode.com/problems/fair-candy-swap/
 */

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int alicesum = 0;
        int bobsum = 0;
        int diff;
        int aliceExchange,bobExchage;
        unordered_set<int> alice(aliceSizes.begin(),aliceSizes.end());
        for(int i : aliceSizes){
            alicesum+=i;
        }
        for(int j : bobSizes){
            bobsum += j;
        }
        if(bobsum > alicesum){
            return {fairCandySwap(bobSizes,aliceSizes)[1],fairCandySwap(bobSizes,aliceSizes)[0]};
        }
        diff = (alicesum - bobsum)/2;
        for(int i : bobSizes){
            if (alice.find(diff + i)!= alice.end()){
                aliceExchange = diff + i;
                bobExchage = i;
                break;
            }
        }
        return {aliceExchange,bobExchage};
        



    }
};
