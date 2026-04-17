/*
 * Problem #2154: Keep Multiplying Found Values by Two
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 17:22:53
 * Link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/
 */

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int res = 0;
        vector<int> vec(10,0);
        for(int i = 0;i < nums.size();i++){
            if(nums[i] % original == 0){
                int q = nums[i]/original;
                if((q & (q-1)) == 0){
                    int power = 32 - __builtin_clz(q) - 1;
                    vec[power] = 1;
                }
            }
        }
        int i;
        for(i = 0;i < 10;i++){
            if(vec[i] == 0) break;
        }
        return original * (1<<i);
        
    }
};
