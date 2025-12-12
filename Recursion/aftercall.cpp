//print 1 to n(after recursive call)

#include <iostream>
using namespace std;

void increasing(int n) {
    if (n == 0) {   // base case
        return;
    }
    
    increasing(n - 1);   // recursive call
    cout << n << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    increasing(n);
    return 0;
}