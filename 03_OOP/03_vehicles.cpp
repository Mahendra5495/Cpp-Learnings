// Create a class hierarchy for a vehicle system with base class "Vehicle" and
// derived class like "Car". Implement methods to stop, start
// the car and show car info.
#include <bits/stdc++.h>
using namespace std;
class Vehicle {
   protected:
    string company, modelName;
    int mileage, topSpeed;
    int started;

   public:
    Vehicle(string company, string model, int mileage, int topSpeed) {
        this->company = company;
        this->modelName = model;
        this->mileage = mileage;
        this->topSpeed = topSpeed;
        started = 0;
    }
    virtual void startVehicle() = 0;
    virtual void stopVehicle() = 0;
    virtual void showInfo() = 0;
};

class Car : public Vehicle {
   public:
    // invoking Base class constructor
    Car(string cmp, string mdl, int mil, int sp) : Vehicle(cmp, mdl, mil, sp) {}
    void startVehicle() {
        if (!started) {
            started = 1;
            cout << modelName << " started. Ready to drive!" << endl;
            return;
        }
        cout << "Engine is already on" << endl;
    }
    void stopVehicle() {
        if (started) {
            started = 0;
            cout << modelName << "'s Engine turned off. Rest a bit!" << endl;
            return;
        }
        cout << modelName << " is already turned off" << endl;
    }
    void showInfo() {
        cout << company + " " << modelName << endl;
        cout << "Mileage: " << mileage << ", Top-Speed: " << topSpeed << endl;
    }
};
int main() {
    Car nano = Car("Tata", "Nano", 25, 65);
    nano.startVehicle();
    nano.startVehicle();
    nano.stopVehicle();
    nano.stopVehicle();
    nano.showInfo();
    return 0;
}