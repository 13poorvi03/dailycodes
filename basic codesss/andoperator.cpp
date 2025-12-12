//wap to print a value which is even and divisble by 3  

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter a number:"<<endl;
    cin>>num;

    if((num%2==0) &&( num%3==0)){


        cout<<"number is even and divisible by 3"<<endl;

    }
    else{
        cout<<"number is not even and not divisible by 3"<<endl;
    }
    return 0;
}