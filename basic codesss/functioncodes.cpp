//code1 ---->

//wap a function to print square of the first 5 natural number 

// #include<iostream>
// using namespace std;
// int square(int x){
//     return x*x;

// }
// int main() {
//     for(int i=1;i<6;i++){

//         int res=square(i);
//         cout<<res<<endl;
//     }
//    cout<<square;
//    return 0;   
// }


//code 2---->

//area  3.14*r*r
//circumference =2*3.14*r

//given radius of a circle .write a funtion to print the area and circumference of the circle 

// #include<iostream>
// using namespace std;

// int area(int r){
// int res =3.14*r*r;
// return res;
// }

// int circumference(int radius){
//     int res =2*3.14*radius;
//     return res;
// }

// int main(){
//     int response=area(34);
//     cout<<response<<endl;
//     int c=circumference(25);
//     cout<<c<<endl;

//     return 0;

// }


//code 3--->

//given the age of a person, write a function to check if the person is eligible to vote or not 

// #include<iostream>
// using namespace std;
// int vote(int x){
//     if(x<18){
//         cout<<"not eligible for voting"<<endl;
//         cout<<"this person is minor";
//     }
     
//     else{
//         cout<<" elgible for voting";
//     }
//     return x;
// }
// int main(){
//     int res=vote(14);
//     return 0;
// }


//code 5-------->

//given two num a ,b wap to print all the prime number present in between a and b

#include <iostream>
using namespace std;

bool isPrime(int num){

    for(int  i=2; i<=(num-1);i++){
        if (num%i==0) return false;

    }
    return true;
}

int main(){
    int a = 2;
    int b=10;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}