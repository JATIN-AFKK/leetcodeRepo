/*
 * Problem #1603: Design Parking System
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 17:41:16
 * Link: https://leetcode.com/problems/design-parking-system/
 */

class ParkingSystem {
    vector<int> maxSets;
    vector<int> count;
public:
    ParkingSystem(int big, int medium, int small) : maxSets(3), count(3, 0) {
        maxSets[0] = big;
        maxSets[1] = medium;
        maxSets[2] = small;
    }
    
    bool addCar(int carType) {
        if(count[carType - 1] < maxSets[carType - 1]){
            count[carType - 1]++;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
