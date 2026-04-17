/*
 * Problem #49: Group Anagrams
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 10:10:26
 * Link: https://leetcode.com/problems/group-anagrams/
 */

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        for i in range(len(strs)):
            s=''.join(sorted(strs[i]))
            if s in d:
                d[s].append(strs[i])
            else:
                d[s]=[strs[i]]
        
        return [d[a] for a in d]


        

