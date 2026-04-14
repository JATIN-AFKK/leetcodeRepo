/*
 * Problem #869: Reordered Power of 2
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 23:54:07
 * Link: https://leetcode.com/problems/reordered-power-of-2/
 */

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int power = 1;
        vector<int> required(10, 0), possible(10, 0);

        int dummy = n;
        while(dummy){
            required[dummy%10]++;
            dummy /= 10;;
        }


        while(power < (1 << 30)){
            dummy = power;
            vector<int> possible(10, 0);

            while(dummy){
                possible[dummy%10]++;
                dummy /= 10;;
            }

            if(possible == required) return true;

            power <<= 1;
        }
        return false;
    }
};
