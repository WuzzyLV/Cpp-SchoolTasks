#include <vector>
#include <iostream>

using namespace std;

class ParkingSystem {
public:
    int bigAmount, bigSlots, mediumAmount, mediumSlots, smallAmounts, smallSlots;
    
    ParkingSystem(int big, int medium, int small) {
        bigAmount = big;
        mediumAmount = medium;
        smallAmounts = small;
        bigSlots = 0;
        mediumSlots = 0;
        smallSlots = 0;
        
    }
    
    bool addCar(int carType) {
        if (carType == 1) {
            if (bigSlots < bigAmount) {
                bigSlots++;
                return true;
            }
        } else if (carType == 2) {
            if (mediumSlots < mediumAmount) {
                mediumSlots++;
                return true;
            }
        } else if (carType == 3) {
            if (smallSlots < smallAmounts) {
                smallSlots++;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */