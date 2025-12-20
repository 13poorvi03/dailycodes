// multiple calls 

// write a function to calculate the nth fibonacci number using recursion 

//fibonacci number -1,1,2,3,5,8,13,21,34,54   -- basically hr two number ko add karke next num aayega 

#include<iostream>
using namespace std;
 int fibo(int n){
if(n==1 || n==2) return 1;
// int ans1 =fibo(n-1);
// int ans2 = fibo(n-2);
// int ans= ans1+ans2;
// return ans;
    return fibo(n-1)+ fibo(n-2);
}

int main(){
  int n;
  cout<<"enter the number :";
  cin>>n;
  cout<<fibo(n);
    return 0;
}











//simple code ----

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n (number of terms): ";
//     cin >> n;

//     int a = 0, b = 1, sum;

//     for (int i = 0; i < n; i++) {
//         cout << a << " ";   // current term print
//         sum = a + b;        // next term calculate
//         a = b;              // shift karna
//         b = sum;
//     }

//     cout << "\n";
//     return 0;
// }