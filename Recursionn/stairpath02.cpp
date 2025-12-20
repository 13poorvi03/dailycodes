//single step , double step , triple steps --- no of ways so that the person reaches nth stairs 

#include<iostream>
using namespace std;

int stair(int n){
    if(n==0 || n==1) return 1;

    if(n==2) return 2;
    if(n==3) return 4;

    return stair(n-1) + stair(n-2) + stair(n-3);
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int ways = stair(n);
    cout<<"Ans -> "<<ways;
    return 0;
}
