/*
 * Problem #2453: Destroy Sequential Targets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 15:46:50
 * Link: https://leetcode.com/problems/destroy-sequential-targets/
 */

class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int,int> up;
        for(int num : nums) up[num % space]++;

        int destroy = 0, seed = -1;
        for(int i = 0;i < nums.size();i++){
            if(seed == -1){
                seed = i;
                destroy = up[nums[i] % space];
            }
            else if(up[nums[i] % space] > destroy){
                seed = i;
                destroy = up[nums[i] % space];
            }
            else if(up[nums[i] % space] == destroy && nums[seed] > nums[i]){
                seed = i;
            }
        }
        return nums[seed];
    }
};
