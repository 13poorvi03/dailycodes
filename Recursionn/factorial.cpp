// Recursion is a method where a function solves a problem by calling itself on smaller inputs until a base case is reached.**

#include<iostream>
using namespace std;

int factorial(int n){
     if(n==1 && n==1){         //rokne ki condition = base condition 
        return 1;
     }
     return n*factorial(n-1);
}
int main(){
  int n;
  cout<<"enter the number : "<<endl;
  cin>>n;
  int fact=factorial(n);
  cout<<fact<<endl;
    return 0;
}














//non recursivve code

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1; 
//     for(int i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;

// }
// int main(){
//   int n;
//   cout<<"enter the number : "<<endl;
//   cin>>n;
//   int fact=factorial(n);
//   cout<<fact<<endl;
//     return 0;
// }