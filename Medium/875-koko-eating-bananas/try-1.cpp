/*
 * Problem #875: Koko Eating Bananas
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2025, 10:26:51
 * Link: https://leetcode.com/problems/koko-eating-bananas/
 */

class Solution {
public:
    bool check(vector<int> vec,int sp,int hour){
        long long h = 0;
        for(auto i : vec){
            if(i%sp == 0){
                h+=i/sp;
            }
            else{
                h+= (i/sp + 1);
            }
        }
        return (h>hour?false:true);
    }
    int minEatingSpeed(vector<int>& p, int hi){
        int l = 1,h = p[0],mid,ans = 0;
        for(auto i : p){
            h = max(h,i);
        }
        while(l<=h){
            mid = l+(h-l)/2;
            if(check(p,mid,hi)){
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};
