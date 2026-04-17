/*
 * Problem #3376: Minimum Time to Break Locks I
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 08/12/2024, 11:55:31
 * Link: https://leetcode.com/problems/minimum-time-to-break-locks-i/
 */

class Solution {
public:
    int findMinimumTime(vector<int>& strength, int K) {
        int time,increment,mi=INT_MAX;
        sort(strength.begin(),strength.end());
        do{
            time=0;
            increment=1;
            for(auto i : strength){
                time+=ceil(i*1.0/increment);
                increment+=K;
            }
            mi=min(mi,time);
        }while(next_permutation(strength.begin(),strength.end()));
        return mi;
    }
};
