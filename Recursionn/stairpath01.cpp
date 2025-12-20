//stair path 

//single step , double step no of ways so that the person reaches nth stair

#include<iostream>
using namespace std;

int stair(int n){

    if(n==1 || n==2) return n;

    // if(n==1)return 1;    //base casee
    // if(n==2) return 2;   //base case

   int totalways=stair(n-1)+stair(n-2);
   return totalways;
}

int main(){
   int n;
   cout<<"enter a numb : "<<endl;
   cin>>n;
   int ways= stair(n);
   cout<<"ans -> "<<ways;
    return 0;
}

