//print numb 1 to n

#include<iostream>
using namespace std;

void increasing(int x, int n){
    if(x > n) return;

    cout << x << endl;
    increasing(x + 1, n);
}

int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;          // ✅ You forgot this line

    increasing(1, n);
    return 0;
}