/*
 * Problem #2379: Minimum Recolors to Get K Consecutive Black Blocks
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 19:17:11
 * Link: https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
 */

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i,j = 0,white = 0,result;
        for(i = 0;i < k;i++){
            if(blocks[i] == 'W'){
                white++;
            }
        }
        result = white;
        while(i < blocks.size()){
            if(blocks[i] == 'W'){
                white++;
            }
            if(blocks[j] == 'W'){
                white--;
            }
            i++;
            j++;
            result = min(result,white);

        }
        return result;

    }
};
