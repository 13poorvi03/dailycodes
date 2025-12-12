// #include <iostream>
// using namespace std;

// int main() {
//     int marks[5] = {22, 34, 54, 36, 44};
    
//     for (int i = 0; i < 5; i++) {
//         cout << marks[i] << " ";   // adds space between numbers
//         // alternatively: cout << marks[i] << endl;  // prints each on new line
//     }
    
//     return 0;
// }


//how to find size of array

// #include<iostream>
// using namespace std;
// int main(){
//     int marks [5] = {99,100,23,45,34};
//     int size = 5;
//     cout<<sizeof(marks)/ sizeof(int) <<endl;

//     return 0;
// }


//taking input of array's elements


// #include<iostream>
// using namespace std; 
// int main(){

//     int size = 5;
//     int marks[size];

//     for(int i=0; i<5; i++) {
//         cout<<"enter a number"<< endl;
//         cin>>marks[i];    //for taking input 
//     }

//     for(int i=0; i<5; i++){
//         cout<<marks[i]<<" ";   //for giving output
//     }

// }



//wap to find smallest and largest in array 

// #include<iostream>

// using namespace std;
// int main(){
//  int arr[6]={12,34,56,78,33,29};
//     int max =arr[0];
    
    
//     for(int i=0; i<6; i++){
//         if(arr[i]>max){
//          max=arr[i];
            
//         }
        
        
//     }
//             cout<<"maximum number : "<<max <<endl;
                
//     return 0;
// }



// #include<iostream>

// using namespace std;
// int main(){
//  int arr[6]={12,34,56,78,33,29};
//     int min =arr[0];
    
    
//     for(int i=0; i<6; i++){
//         if(arr[i]<min){
//          min=arr[i];
            
//         }
        
        
//     }
//             cout<<"miniimum number : "<<min <<endl;
                
//     return 0;
// }



// #include <iostream>
// #include <climits>   // for INT_MAX and INT_MIN
// using namespace std;

// int main() {
//     int nums[] = {5, 15, 22, 1, -1, -15, -24};
//     int size = 7;  // corrected size

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for (int i = 0; i < size; i++) {
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }

//     cout << "smallest = " << smallest << endl;
//     cout << "largest = " << largest << endl;

//     return 0;
// }


// passing 

// #include<iostream>
// using namespace std; 

// void changeArr(int arr[], int size){
//     cout<<" in function \n";
//     for(int i=0; i<size ; i++){
//         arr[i]= 2*arr[i];
//     }
// }

// int main (){
//      int arr[]={ 1,2,3,4,5,6,7,8};

//      changeArr(arr, 8);

//      cout<<" in main\n  ";
//      for(int i=0; i<8 ; i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     return 0;
// }


// linear search

#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,43,23,22,54,20};
    int target = 54;

    for(int i=0; i<6; i++){
       if(  arr[i] == target){
            // target = arr[i];
            cout<<i<<endl;
       }
       else{
        cout<<"number is not found"<<endl;
       }
    }
    return 0;
}




// int linearSearch(int arr[] , int sz)