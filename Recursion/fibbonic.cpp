// write a function to calculate the nth fibonacci number using recursion 

#include<iostream>
using namespace std;
  
int fibo(int n){

    // style 1 -----

    // if(n==1 || n==2) return 1;
    // int ans1 = fibo(n-1);
    // int ans2 = fibo(n-2);
    // int ans = ans1+ans2;
    // return ans;


    //style 2-----

    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
    
}
int main(){
    int n;
    cout<<" enter a number : ";
    cin>>n;
    cout<<fibo(n);
    return 0;
}