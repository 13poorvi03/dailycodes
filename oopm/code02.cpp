#include <iostream>               // Standard I/O header include kar rahe hain (cout, endl ke liye)
using namespace std;              // std namespace use karte hain taaki std:: likhna na pade

class Student {                   // Student naam ka class define kar rahe hain (custom data type)
    string name;                  // Private member: student ka naam store karega
    int age, rollno;              // Private members: age aur roll number store karenge
    string grade;                 // Private member: grade store karega

public:                           // Public section: yahan ke functions bahar (main) se accessible honge

    // Setter: name set karta hai
    void setName(string n) {      // Function parameter 'n' me name aata hai
        name = n;                 // 'name' member ko 'n' assign kar diya
    }

    // Setter: age set karta hai
    void setAge(int a) {          // 'a' me age aati hai
        age = a;                  // 'age' member ko 'a' assign kar diya
    }

    // Setter: roll number set karta hai
    void setRollNo(int r) {       // 'r' me roll number aata hai
        rollno = r;               // 'rollno' member ko 'r' assign kar diya
    }

    // Setter: grade set karta hai
    void setGrade(string g) {     // 'g' me grade aata hai
        grade = g;                // 'grade' member ko 'g' assign kar diya
    }

    // Display: current student details print karta hai
    void display() {                                   // Object ki current state show karta hai
        cout << "Name: " << name << endl;              // Name print
        cout << "Age: " << age << endl;                // Age print
        cout << "Roll No: " << rollno << endl;         // Roll number print
        cout << "Grade: " << grade << endl;            // Grade print
    }
};

int main() {                       // Program ka entry point
    Student s1;                    // Student type ka object 's1' bana liya (default construct)
    s1.setName("Rohit");           // Name set kiya: "Rohit"
    s1.setAge(10);                 // Age set ki: 10
    s1.setRollNo(21);              // Roll no set kiya: 21
    s1.setGrade("A+");             // Grade set ki: "A+"

    s1.display();                  // 's1' ke details console par print kar diye
    return 0;                      // Program successful end
}