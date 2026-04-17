/*
 * Problem #744: Find Smallest Letter Greater Than Target
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 13:28:31
 * Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 */

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0 , j = letters.size()-1, mid , ans = 0;
        while(i<=j){
            mid = i + (j - i)/2;
            if(letters[mid]>target){
                ans = mid;
                j = mid - 1;
            }
            else if (letters[mid] == target){
                i = mid + 1;
            }
            else{
                i = mid + 1;
            }
        }
        return letters[ans];
    }
};
