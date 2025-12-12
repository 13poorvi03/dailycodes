// #include<iostream>
// using namespace std;

// void fun( string name){
//     cout<<" are u having fun "<<name<<" ? "<<"\n";
// }

// int addition (int x, int y){     //function 
//     int result = x+y;

//       return result ;
// }


// int main(){

//   fun("poorvi");
//   int x = addition(5,6);   //calling a function
// cout<<x<<endl;

// // cout<<addition(5,3)<<endl;
//   return 0;
// }


//function prototype

// #include<iostream>
// #include<math.h>
// using namespace std;

// void fun(string);
// int addition (int , int);

// int main(){
//     fun("poorvi");
//     int response = addition(20,5);
//     cout<<response;
//     return 0;
// }

// void fun(string name){
//     cout<<" are u having fun "<<name<<" ? "<<"\n";

// }
// int addition (int x, int y){
//     int result = x+y;
//     cout<<sqrt(result)<<"\n";
//     return result ;
// }



//write a function to print square of the first 5 natural numbers


// #include<iostream>
// using namespace std;

// int square (int x){
//     return x*x;

// }

// int main(){
//     for(int i=1; i<=5; i++){
//         cout<<square(i)<<" ";
//     }
//     return 0;
// }



//given radius of a circle write a function to print the area and circumference of the circle 


// #include<iostream>
// using namespace std;

// int areaofcircle(int r){
//     int res= 3.14*(r*r);
//     return res;
// }

// int circumference(int r){
//     int response = 2*(3.14*r);
//       return response;
// }
// int main(){
//     cout<<areaofcircle(25)<<endl;;
    

//     cout<<circumference(12)<<endl;
        
//     return 0;
// }



//given the age of a person write a function to check if the person is eligibleto vote or not


// #include<iostream>
// using namespace std;

// int toovote(int x){
    
//     if(x<18){
//         cout<<"this is person is not eligible to vote "<<endl;
//     }
//     else{
//         cout<<"this person is eligible to vote "<<endl;
//     }
//     return x ;
// }
// int main(){
    
//     cout<<toovote(54);
//     return 0;

// }



//same question but taking input of age 


// #include <iostream>
// using namespace std;

// int toovote(int x) {
//     if (x < 18) {
//         cout << "This person is not eligible to vote" << endl;
//     } else {
//         cout << "This person is eligible to vote" << endl;
//     }
//     return x;
// }

// int main() {
//     int age;  // variable to store user input
//     cout << "Enter age: ";
//     cin >> age;   // take input from user

//     toovote(age); // call function with user input
//     return 0;
// }



//given two numbers a and b write a program using functions to print all the odd numbers between them


// #include<iostream>
// using namespace std;

// bool isOdd(int num){
//     if(num%2==0){
//         return false;
//     }
//     else{
//         return true;
//     }
// }
// int main(){
//   int a =1, b =10;
//   for(int i =a ; i<=b; i++){
//     if(isOdd(i)){
//         cout<<i<<" ";
//     }
//   }
//   return 0;
// }




//given two numbers a and b wap to print all the prime numbers present between a and b.


// #include<iostream>
// using namespace std;

// bool isprime(int num){
//     for(int i=2; i<=(num-1); i++){
//         if(num% i==0) return false;

//     }
//     return true ;
// }
// int main(){
// // int a= 2, b=10;
// cout<<"enter an a"<<endl;
// int a;
// cin>>a;
// cout<<"enter a b"<<endl;
// int b;
// cin>>b;
// for(int i=a; i<=b; i++){
//     if(isprime(i)){
//         cout<<i<<" ";
//     }
// }
// return 0;
// }



//scope of variable in c++

//gloabal scope 

// #include<iostream>
// using namespace std;

// string name = " poorvi ";  //global scope which is always define ouside the main funstion or any function in program this scope we can access at anywhere 


// void fun(){

//     cout<<name<<"how's the day "<<endl;
// }
// int main(){
//  cout<<name<<"\n";
 
//  fun();
//  return 0;
// }



//loacal scope

// #include <iostream>
// using namespace std;

// int fun() {   
//     int x = 10;
//     for (int y = 0; y <= 5; y++) {
//         x = x + y;              //loacal scope which can only access inside the block 
//         cout << x << endl;   
//     }
//     return x;   
// }

// int main() {
//     cout << "Final value: " << fun() << endl;
//     return 0;
// }




// pass by value and pass by reference 



//pass value
// #include<iostream>
// using namespace std;
// void swap(int x, int y){
    
//     int temp = x;
//     x=y; 
//     y = temp;
// }
// int main(){
//     int i=7, j =6;
//     swap(i,j);
//     cout<<i<<" "<<j<<endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void increment(int x) {
//     x = x + 1;   // modifies only the copy
//     cout << "Inside function: " << x << endl;
// }

// int main() {
//     int num = 5;
//     increment(num);   // pass by value
//     cout << "Outside function: " << num << endl;
//     return 0;
// }




//pass by reference


// #include<iostream>
// using namespace std;

// int main(){
//     int x = 9;
//     int &y = x;
    
//     cout<<x<<" "<<y<<"\n";

//     y=88;

//     cout<<x<<" "<<y<<"\n";


//     return 0;
// }




// #include<iostream>
// using namespace std;

// void swap(int &x, int &y){
//     int temp = x;
//     x=y;
//     y= temp ;
// }

// int main(){
//    int x =9;
//    int c= 1;
//    int &y = x;
//    swap(x,c);
//    cout<<x<<" "<<c;
   
//     return  0;
// }



//default parameter value 

//it is a value in the function declaration automatically assigned by the compiler if the calling function does not pass any value to that argument 

// #include<iostream>
// using namespace std;

// void fun(int x, int y =100, int z=30){
//     cout<<x<<" "<<y<<" "<<z;
// }
// int main(){
//     fun(10,20);
//     return 0;
// }



//find factorial


// #include<iostream>
// using namespace std; 
// int factorial (int n){
//     int fact =1;
//     for(int i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }


// int main(){

//    int n; 
//    cout<<" enter a  number : ";
//    cin>>n;

//    int fact = factorial(n);
//    cout<<factorial(n)<<endl;
//    return 0;
// }





// print n to 1

#include<iostream>
using namespace std;

void greeting(int n){
    for(int i =1; i<=n; i++){
        cout<<" good morning "<<endl;
    }
    return ;
}
int main(){
    int n;
    cout<<" enter a number : ";
    cin>>n;
    greeting(n);
    return 0;
}