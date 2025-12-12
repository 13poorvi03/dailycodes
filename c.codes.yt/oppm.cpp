


// this issue can be solved  using any one  of the following methods 
//1. classifying the copy using scope resolution operator in front of the variable an method names ::
//in herirecal  the two or more classes which are inheriting from a single base class in herirecal which are single bas should in inherite virtuallyy. this result to create a single copy  in the class that inherites from multiple classes

#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo() {
        x = 2;
        cout << "Constructed\n";
    }

    ~Demo() {
        cout << "Destructed\n";
    }
};

int main() {
    Demo a; // Constructor called
    {
        Demo b; // Constructor called, destructor called at end of scope
    }
    Demo *c = new Demo; // Constructor called
    delete c;           // Destructor called (important!)
    
    return 0;
}