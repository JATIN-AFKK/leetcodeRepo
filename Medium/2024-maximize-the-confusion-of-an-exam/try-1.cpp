/*
 * Problem #2024: Maximize the Confusion of an Exam
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 19:04:43
 * Link: https://leetcode.com/problems/maximize-the-confusion-of-an-exam/
 */

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int numf = 0, l = 0, ans = 0;
        for(int e = 0;e < answerKey.size(); e++){
            if(answerKey[e] == 'F') numf++;
            while(numf > k){
                if(answerKey[l] == 'F') numf--;
                l++;
            }
            ans = max(ans, e - l + 1);
        }

        l = 0;
        int numt = 0;
        for(int e = 0;e < answerKey.size(); e++){
            if(answerKey[e] == 'T') numt++;
            while(numt > k){
                if(answerKey[l] == 'T') numt--;
                l++;
            }
            ans = max(ans, e - l + 1);
        }
        return ans;
    }
};
