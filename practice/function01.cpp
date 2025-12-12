//code 1------>

// write a function to add two numbers

// #include<iostream>
// using namespace std;

// int sumoftwo(int a, int b){
//     return a+b;
// }

// int main(){

//  int a,b;
  
//   cout<<"enter a number : ";
//   cin>>a>>b;
//   sumoftwo(a,b);
//   cout<<sumoftwo(a,b)<<endl;

//    return 0;
// }


//code 2---->

//write a function to check if a number is even or odd


// #include<iostream>
// using namespace std;

// int evenodd(int x){
//     if(x%2==0){
//         cout<<"this is number is even : "<< x <<endl;
//     }
//     else{
//         cout<<"this number is odd : "<< x <<endl;
//     }
//      return x;
// }
// int main(){
//     cout<<evenodd(246);
//     return 0;
// }



//code 3----->

// write a function to print your name n times

// #include<iostream>
// using namespace std;

// void name(int n){
//     for(int i=1; i<=n; i++){
//         cout<<"poorvi"<<endl;
//     }
// }

// int main(){
//    cout<<"enter a number : "<<endl;
//    int n;
//     cin>>n;
//     name(n);             // mistake --void function mae bass call karte h function cout nhi karwate coz wo kuch return nhi karta hai 

//      return 0;

// }



//code 4------->

// write a function to find square of a number

// #include<iostream>
// using namespace std;

//  int square(int n){
//     return n*n;

//  }

// int main(){
//      cout<<"enter a number : "<<endl;
//      int n;
//      cin>>n;
//      square(n);
//      cout<<square(n)<<endl;
//     return 0;
// }



//code 5 ------->

//write a function that prints hello world without parameters 

// #include<iostream>
// using namespace std;
// void hw(){
//     cout<<" hello world"<<endl;
//     return ;
// }

// int main(){
//   hw();            //mistake ki thi idhr void nhi likhna hota hai bass function ka name likhte hai 
//  return 0;
// }


//code 6 ---->

//write a function to find the maximum number of two numbers 

// #include<iostream>
// using namespace std;

//  void maximum(int x, int y){
//     if(x>y){                   //when x is greater then y then print x
//         cout<<"max : "<<x<<endl;
//     }
//     else{
//         cout<<"max : "<<y<<endl;  //otherwise print y 
//     }
//     return;
// }
// int main(){
//     cout<<"enter two x : "<<endl;
//     int x;
//     cin>>x;
//     cout<<"enter two y : "<<endl;
//     int y;
//     cin>>y;
//     maximum(x,y);
//     return 0;

// }




//code 7 ----->

//write a function to calculate factorial of a number 

// #include<iostream>
// using namespace std;
                                         ///with recursive calll
// int factorial(int x){
//     if(x==0 || x==1) return 1;
//     return x*factorial(x-1);
// }
// int main(){
//     cout<<"enter a number : "<<endl;

//     int x;
//     cin>>x;
//     factorial(x);
//     cout<<factorial(x);
//     return 0;
// }


//without recursive call


// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;   // starting value

//     for(int i = 1; i <= n; i++){
//         fact = fact * i;   // har number multiply hota jayega
//     }

//     return fact;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Factorial = " << factorial(n);
//     return 0;
// }



//code 7 ------>

//write a function to check if a number is prime 

// #include<iostream>
// using namespace std;

// void check(int n){
//     bool isPrime = true;

//     if(n <= 1){
//         isPrime = false;   // 0, 1 prime nahi hote
//     }

//     for(int i = 2; i < n; i++){
//         if(n % i == 0){
//             isPrime = false;   // agar beech me divide ho gaya
//             break;
//         }
//     }

//     if(isPrime){
//         cout << "This number is prime: " << n << endl;
//     } else {
//         cout << "This number is not prime: " << n << endl;
//     }
// }

// int main(){
//     cout << "Enter a number: ";
//     int n;
//     cin >> n;

//     check(n);
//     return 0;
// }

//short code 

// #include<iostream>
// using namespace std;

// void check(int n){
//     for(int i = 2; i < n; i++){
//         if(n % i == 0){
//             cout << "Not prime";
//             return;
//         }
//     }
//     cout << "Prime";
// }

// int main(){
//     cout<<"enter a number : "<<endl;
//     int n;
//     cin >> n;
//     check(n);
// }


