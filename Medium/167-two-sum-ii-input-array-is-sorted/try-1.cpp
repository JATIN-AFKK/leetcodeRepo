/*
 * Problem #167: Two Sum II - Input Array Is Sorted
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 11:39:36
 * Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> pair;
        vector<int> v;
        for(int i : numbers){
            pair[i]++;
        }
        for(int i=0;i<numbers.size();i++){
            pair[numbers[i]]--;
            if(pair[target-numbers[i]]>0){
                v.push_back(i+1);
                pair[numbers[i]]++;
            }
            
        }
        return v;   
    }
};
