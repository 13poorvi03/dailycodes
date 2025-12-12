#include <iostream>
using namespace std;

class Car {
public:
    string fueltype;
    void start() {
        cout << "Car started" << endl;
    }
    void stop() {
        cout << "Car stopped" << endl;
    }
};

// Use virtual inheritance to avoid duplicate Car base
class FamilyCar : virtual public Car {
};

class SportCar : virtual public Car {
};

class SUV : public FamilyCar, public SportCar {
};

int main() {
    SUV s1;
    s1.fueltype = "Petrol";
    s1.start();
    s1.stop();

    return 0;
}