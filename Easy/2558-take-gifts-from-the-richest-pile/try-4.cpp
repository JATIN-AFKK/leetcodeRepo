/*
 * Problem #2558: Take Gifts From the Richest Pile
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 12/12/2024, 22:53:37
 * Link: https://leetcode.com/problems/take-gifts-from-the-richest-pile/
 */

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int e=gifts.size()-1;
        long long int s=0;
        while (k){
            sort(gifts.begin(),gifts.end());
            gifts[e]=int(sqrt(gifts[e]));
            k--;
        }
        for(auto i : gifts){
            s+=i;
        }
        return s;
    }
};
