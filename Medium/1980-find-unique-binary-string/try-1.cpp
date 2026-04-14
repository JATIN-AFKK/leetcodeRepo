/*
 * Problem #1980: Find Unique Binary String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2026, 21:31:17
 * Link: https://leetcode.com/problems/find-unique-binary-string/
 */

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> store;
        for(string str : nums){
            int value = 0;
            for(char bit : str) value = ((value << 1) + (bit - '0'));
            store.insert(value);
        }
        int i;
        for(i = 0;i < 17;i++){
            if(store.find(i) == store.end()) break;
        }

        string ans;
        int numBits = nums.size();

        while(numBits--){
            ans.push_back(('0' + i%2));
            i /= 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;

    }
};
