/*
 * Problem #3265: Count Almost Equal Pairs I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2026, 16:56:44
 * Link: https://leetcode.com/problems/count-almost-equal-pairs-i/
 */

class Solution {
public:
    int countPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        unordered_map<string, int> up;
        int ans = 0;

        for(int num : nums){
            string key = to_string(num);
            ans += up[key];
            for(int i = 0;i < key.size();i++){
                for(int j = i + 1;j < key.size();j++){
                    if(key[i] == key[j]) continue;
                    swap(key[i], key[j]);

                    int t = 0;
                    while(t < key.size() && key[t] == '0') t++;
                    ans += up[key.substr(t)];

                    swap(key[i], key[j]);

                }
            }
            up[key]++;
        }
        return ans;
        

    }
};
