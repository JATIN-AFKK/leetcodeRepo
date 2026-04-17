/*
 * Problem #605: Can Place Flowers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/11/2024, 14:55:12
 * Link: https://leetcode.com/problems/can-place-flowers/
 */

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(flowerbed.size()==1 && n==0){
            return true;
        }
        else if(flowerbed.size()==1 && n==1 && flowerbed[0]==0){
            return true;
        }
        else if(flowerbed.size()==1){
            return false;
        }
        
        
        int c=0;
        if(flowerbed[1]==0 && flowerbed[0]==0){
            c++;
            flowerbed[0]=1;
        }
    
        
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                c++;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
            c++;
            flowerbed[flowerbed.size()-1]=1;
        }
        return (n<=c?true:false);
    }
};
