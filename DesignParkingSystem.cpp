// https://leetcode.com/problems/design-parking-system/submissions/
// Time complexity of addCar: O(1)

class ParkingSystem {
public:
    public: vector<int> vehicle;
public:
    ParkingSystem(int big, int medium, int small) {
        vehicle = {big, medium, small};
    }
    
    bool addCar(int carType) {
        // for each small car, check if small car spots are availablem if so, return true and decrease the count of available spots
        if(carType == 1) {
            if(vehicle[0] > 0){
                vehicle[0]--;
                return true;
            }
        }
        // for each medium car, check if medium car spots are availablem if so, return true and decrease the count of available medium spots
        else if(carType == 2) {
            if(vehicle[1] > 0){
                vehicle[1]--;
                return true;
            }
        }
        // same logic as above but for big cars
        else if(carType == 3) {
            if(vehicle[2] > 0){
                vehicle[2]--;
                return true;
            }
        }
        return false;
    }
};