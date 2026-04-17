/*
 * Problem #605: Can Place Flowers
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/11/2024, 15:08:32
 * Link: https://leetcode.com/problems/can-place-flowers/
 */

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0,i;
        bool boolleft,boolright;
        for(i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                boolleft= (i==0||flowerbed[i-1]==0);
                boolright= (i==flowerbed.size()-1 || flowerbed[i+1]==0 );

                if(boolleft && boolright){
                    c++;
                    flowerbed[i]=1;
                }
            }
        }

        return (n<=c?true:false);
    }
};
