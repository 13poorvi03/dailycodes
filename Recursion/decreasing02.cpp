// // print good morning 

// #include<iostream>
// using namespace std;

// void greeting(int n){
//      if(n==0){
//         return ;
//      }
//      cout<<" good morning "<<endl;
//      greeting(n-1);
//     return ;
// }
// int main(){
//     int n;
//     cout<<" enter a number : ";
//     cin>>n;
//     greeting(n);
//     return 0;
// }



//print  n to 1

#include <iostream>
using namespace std;

void decreasing(int n) {
    if (n == 0) {   // base case
        return;
    }
    cout << n << endl;   // print current number
    decreasing(n - 1);   // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    decreasing(n);
    return 0;
}