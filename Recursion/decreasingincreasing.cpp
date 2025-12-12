//print decreasing and increasing 

#include <iostream>
using namespace std;

void decinc(int n) {
    if (n == 0) {   // base case
        return;
    }

    // Decreasing phase
    cout << n << " "<<endl;      // print before recursive call
    decinc(n - 1);         // recursive call

    // Increasing phase
    cout << n << " "<<endl;      // print after recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    decinc(n);

    return 0;
}