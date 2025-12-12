#include <iostream>
using namespace std;

class Student {        //class
public:                 //access specifier 
    string name;
    int age, rollno;
    string grade;
};

int main() {
    Student s1;   //class student and object s1
    s1.name = "Rohit";
    s1.age = 10;
    s1.rollno = 21;
    s1.grade = "A+";

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollno << endl;
    cout << "Grade: " << s1.grade << endl;

    return 0;
}