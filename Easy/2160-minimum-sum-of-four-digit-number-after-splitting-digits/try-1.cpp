/*
 * Problem #2160: Minimum Sum of Four Digit Number After Splitting Digits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/08/2025, 11:15:28
 * Link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
 */

class Solution {
public:
    int minimumSum(int num) {
        vector<int> vec;
        while(num!=0){
            vec.push_back(num%10);
            num = num/10;
        }

        sort(vec.begin(),vec.end());
        if(vec[0] == vec[1] && vec[0] == 0){
            return vec[3] +vec[2];
        }
        else if(vec[0] == 0){
            return vec[1]*10 +vec[2] + vec[3];
        }
        else{
            return vec[0]*10 +vec[3] + vec[1]*10 +vec[2];
        }
        return 0;
    }
};
