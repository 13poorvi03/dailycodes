//object is the real worl an entity that has a state and behaviour , any thing thst exist in real world .

//class can have multiple objects 

//instagram is the class and its user is objects

#include <iostream>
using namespace std;

class Car {
    string model;                // car ka model name
    int modelno;                 // car ka model number
    int yearofmanufacturing;     // car ka manufacturing year
    string colour;               // car ka colour (string rakha hai)

public:
    // setters
    void setModel(string m) {
        model = m;
    }
    void setModelNo(int n) {
        modelno = n;
    }
    void setYear(int y) {
        yearofmanufacturing = y;
    }
    void setColour(string c) {
        colour = c;
    }

    // display function
    void display() {
        cout << "Model : " << model << endl;
        cout << "Model No : " << modelno << endl;
        cout << "Year of Manufacturing : " << yearofmanufacturing << endl;
        cout << "Colour : " << colour << endl;
    }
}; // <-- semicolon zaroori hai

int main() {
    Car F1;                      // Car type ka object banaya
    F1.setModel("Ferrari");      // model set kiya
    F1.setModelNo(300023);       // model number set kiya
    F1.setYear(2002);            // year set kiya
    F1.setColour("Red");         // colour set kiya
    F1.display();                // details print

    return 0;
}