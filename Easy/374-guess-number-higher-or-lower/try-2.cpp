/*
 * Problem #374: Guess Number Higher or Lower
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 13:11:59
 * Link: https://leetcode.com/problems/guess-number-higher-or-lower/
 */

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i = 1, j = n,mid;
        while(i<=j){
            mid = i + (j - i)/2;
            if(guess(mid) == 0){
                return mid;
            }
            else if(guess(mid) == 1){
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        return mid;
    }
};
