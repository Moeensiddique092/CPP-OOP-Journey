#include<iostream>
using namespace std;
class ParkingSystem {
private:
    int bigslots;
    int mediumslots;
    int smallslots;

public:
    ParkingSystem(int big, int medium, int small) {
        bigslots = big;
        mediumslots = medium;
        smallslots = small;
    }
    
    bool addCar(int carType) {
        if (carType == 1){
            if (bigslots > 0){
                bigslots--;
                return true;
            }
        } else if (carType == 2){
            if (mediumslots > 0){
                mediumslots--;
                return true;
            }
        } else if (carType == 3){
            if (smallslots > 0){
                smallslots--;
                return true;
            }
        }
        
        return false;
    }
};  

int main(){
    ParkingSystem myParking(2,1,0);
    
    // 1 for successfully parked and 0 is for No slots available

    bool result1 = myParking.addCar(1);
    cout <<"Park the car: " << result1 << endl;

    bool  result2 = myParking.addCar(2);
    cout << "Park the car: " << result2 << endl;

    bool result3 = myParking.addCar(3);
    cout << "Park the car: " << result3 << endl;

    return 0;
}