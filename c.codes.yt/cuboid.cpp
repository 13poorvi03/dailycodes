//given a class rectangle wwith attributes length and breadth write methods to calculate the area of perimeter of the rectangle also demostrate the use of these methods in sample programms

// the above question create a cuboid class which should be the dreived class of rectangle the cuboid should have only one member variable that is height also write a function to find the volume of the cuboid.Note that because of inheritance length and breadth is already available to the cuboid class.
//what are the changes to be done in the rectangle class for this new task .

#include <iostream>
using namespace std;

class Rectangle {
protected:
    int length, breadth;

public:
    Rectangle() {
        length = 1;
        breadth = 1;
        cout << "Default reset\n";
    }

    Rectangle(int l, int b) {   // use different parameter names
        this->length = l;
        this->breadth = b;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }

    void display() {
        cout << "area: " << area() << " perimeter: " << perimeter() << endl;
    }
};

class Cuboid : public Rectangle {
protected:
    int height;

public:
    Cuboid() {
        height = 1;
    }

    Cuboid(int l, int b, int h) : Rectangle(l, b) {   // no shadowing now
        this->height = h;
    }

    int volume() {
        return length * breadth * height;   // accessible since protected
    }

    void display() {
        cout << "volume: " << volume() << endl;
    }
};

int main() {
    Cuboid a(20, 10, 5);
    a.display();
    return 0;
}