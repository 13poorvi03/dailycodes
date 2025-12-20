//style -1 --------->
// simple ---
// #include<iostream>
// using namespace std;

// int powerlog(int a, int b){
//     if(b==1) return a;
//     int x = powerlog(a,b/2);
//     int recans= x*x;
//     return recans;
// }
// int main() {
//     int a, b;
//     cout << "Enter base: ";
//     cin >> a;
//     cout << "Enter power: ";
//     cin >> b;

//     cout << "Result = " << powerlog(a, b) << endl;
//     return 0;
// }




// the main code ------->

#include <iostream>
using namespace std;

int powerlog(int a, int b) {
    // Base cases
    if (b == 0) return 1;   // anything^0 = 1
    if (b == 1) return a;   // anything^1 = itself

    // Recursive step
    int c = powerlog(a, b/2);   // compute half power
    int recans = c * c;         // square it

    // If b is odd, multiply one extra 'a'
    if (b % 2 != 0) {
        recans = recans * a;
    }

    return recans;
}

int main() {
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    cout << "Result = " << powerlog(a, b) << endl;
    return 0;
}