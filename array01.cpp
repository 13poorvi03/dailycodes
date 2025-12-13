// given an array of marks of students if the mark of any student is less than 35 prints its roll number 

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5]={45,33,67,54,89};
//     for(int i=0; i<5 ;i++){
//     if(marks[i]<35){
//         cout<<"less marks than 35 -- "<<i<<endl;
//     }
//     }
//     return 0;
// }



//calculate the sum of all the elements in the given array 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={12,34,56,78,54,32};
//     int sum=0;
//     for (int i=0; i<6; i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }


//find the maximum value out of all the elements in the array 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[5]={12,34,56,78,54};
//     int max= INT_MIN;
//     for(int i=0; i<5; i++){
//         if(max<arr[i]){
//             max=arr[i];
            
//         }
        
//     }
     
//      cout<<max<<endl;

//     return 0;
// }


//find the minimum value out of all the elements in the array

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[5]={86,34,56,8,54};
//     int min= INT_MAX;
//     for(int i=0; i<5; i++){
//         if(min>arr[i]){
//             min=arr[i];
            
//         }
        
//     }
     
//      cout<<min<<endl;

//     return 0;
// }



//given an array of integer change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10

// #include<iostream>
// using namespace std;
// int main(){
//      int arr[6]={1,2,3,4,5,6};
//      for(int i=0; i<6; i++){
//         if(i%2==0){
//             arr[i]*=2;
//         }
//         else{
//             arr[i]+=10;
//         }
//         cout<<arr[i]<<" ";
//      }
      
//     return 0;
// }



//count the number of elements in given array greater than a given number x 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int x=4;
//     int count =0;
//     for(int i=0 ;i<6; i++){
//         if(x<arr[i]){
//             count++;
//         }

//     }
//     cout<<count<<endl;
//     return 0;
// }



//find the difference between the sum of elements at even indices to the sum of elements at odd indices 

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[6]={1,2,3,4,5,6};
//    int sumeven=0;
//    int sumodd=0;
//    for(int i=0; i<6; i++){
//     if(i%2==0){
//         sumeven+=arr[i];
//     }
//     else{
//         sumodd+=arr[i];
//     }
//    }
//    int diff=sumeven-sumodd;
//    cout<<diff<<endl;

//     return 0;
// }


//find the total number of pairs in the array whose sum is equal to the given value x

#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,4,1,7,9};
    int target =5;
    int count =0;
    for(int i=0; i<6;i++){
        for(int j=i+1; j<6; j++){
            if(arr[i]+arr[j]==target){
                count++;
            }
        }
    }
     cout<<count<<endl;
    return 0;
}




