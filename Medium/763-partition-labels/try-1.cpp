/*
 * Problem #763: Partition Labels
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/09/2025, 16:06:41
 * Link: https://leetcode.com/problems/partition-labels/
 */

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last = -1,pre = 0;
        vector<int> last_vec(26,0),result;
        for(int i = 0;i < s.size();i++){
            last_vec[s[i] - 'a'] = i; 
        }
        for(int i = 0;i < s.size();i++){
            last = max(last,last_vec[s[i] - 'a']);
            if(last == i){
                result.push_back(i - pre + 1);
                pre = i+1;
            }
        }
        return result;
    }
};
