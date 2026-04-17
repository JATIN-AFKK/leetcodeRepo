/*
 * Problem #697: Degree of an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 10:31:45
 * Link: https://leetcode.com/problems/degree-of-an-array/
 */

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int degree = 0,result = INT_MAX;
        unordered_map<int,int> fq,fr,la;
        for(int i = 0; i < nums.size();i++){
            fq[nums[i]]++;
            la[nums[i]] = i;
            if(fr.find(nums[i]) == fr.end()){
                fr[nums[i]] = i;
            }
            degree = max(degree,fq[nums[i]]);
        }

        for(auto& [x,count] : fq){
            if(count == degree){
                result = min(result,la[x] - fr[x] + 1);
            }
        }
        return result;
        
    }
};
