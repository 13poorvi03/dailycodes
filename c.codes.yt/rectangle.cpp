//given a class rectangle wwith attributes length and breadth write methods to calculate the area of perimeter of the rectangle also demostrate the use of these methods in sample programms

// the above question create a cuboid class which should be the dreived class of rectangle the cuboid should have only one member variable that is height also write a function to find the volume of the cuboid.Note that because of inheritance length and breadth is already available to the cuboid class.
//what are the changes to be done in the rectangle class for this new task .
#include<iostream>
using namespace std;
class Rectangle {
    protected:
    int length, breadth;
    public:
    Rectangle (){
        length = 1; breadth = 1;
    }
    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
        int area(){
            return length*breadth;
        }
        int perimeter (){
          return 2*(length+breadth);
        }
        void display(){
            cout<<"area:"<<area()<<"perimeter :"<<perimeter()<<endl;
        }
     };
int main(){
Rectangle r(20,10);
r.display();
}