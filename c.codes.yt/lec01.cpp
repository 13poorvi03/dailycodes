//wrie a c++ programm to demonstrate dyanamic polymorphism dyanamic dispatch

#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void start() {
        cout << "Generic Appliance\n";
    }
};

class Toaster : public Appliance {
public:
    void start() override {
        cout << "Toaster calls heating up\n";
    }
};

class Oven : public Appliance {
public:
    void start() override {
        cout << "Oven preheating\n";
    }
};

void runAppliance(Appliance *ptr) {
    ptr->start();  // dynamic dispatch happens here
}

int main() {
    Appliance *t = new Toaster;
    Appliance *o = new Oven;

    runAppliance(t);
    runAppliance(o);

    delete t;
    delete o;
    return 0;
}