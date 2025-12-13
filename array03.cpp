// git add array03.cpp
// git commit -m "updated files"
// git push origin main


//if an array arr contains n elements then check if the given array is a palindrome or not


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={1,2,3,2,1};
//     int size = 5;
//     bool isPalindrome = true;

//     for(int i=0; i<size/2; i++){
//         for(int j=size-1-i; j>=0; j--){
//             if(arr[i] != arr[j]){
//                 isPalindrome = false;
//             }
//             break; // inner loop sirf ek baar chalega
//         }
//     }

//     if(isPalindrome){
//         cout<<"this is palindrome";
//     }
//     else{
//         cout<<"this is not palindrome";
//     }

//     return 0;
// }



//rotate the given array 'a' by k steps , where k is non - negative 


//important

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={12,23,34,45,56};
//     int size = 5;
//     int k = 7;

//     k = k % size;   // important

//     for(int x = 0; x < k; x++){          // OUTER LOOP (repeat rotation)
//         int last = arr[size-1];          // last element save

//         for(int i = size-1; i > 0; i--){ // INNER LOOP (right shift)
//             arr[i] = arr[i-1];
//         }

//         arr[0] = last ;               // last ko front me daal do
//     }

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }



//wap to reverse middle elements 

// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={12,24,33,46,53};
//   for(int i=2, j=4; i<=j;i++,j--){        //i j se greater hona chahiye ya equal otherwise loop end
//     int temp =arr[i];
//     arr[i]=arr[j];
//     arr[j]= temp;  
//   }
//     for(int k=0; k<5; k++){
//       cout<<arr[k]<<" ";
//     }
    
//     return 0;

// }



//wap to reverse array at certain elements 

//important

// #include<iostream>
// using namespace std;
// void reverse(int arr[], int si, int ei){
//   for(int i=si, j=ei; i<=j; i++,j--){
//     int temp =arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//   }
//   return ;
// }
// int main(){
//     int arr[5]={12,24,33,46,53};
//     int n=5;
//     int k=58;
//     k=k%n;
//     reverse(arr,0,n-1);
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);
//     for(int i=0; i<5; i++){
//       cout<<arr[i]<<" ";
//     }
//   return 0;
// }





//find the unique number in a given array where all the elements are being repeated twice with one value being unique 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,1,3,4,6,5,2,4,1};
//     int size = 10;
//     for(int i =0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]==arr[j]){           //all this loop is for traversing array to find is there any unique element is present
//                 arr[i]=arr[j]= -1;       // basically this loop is finding how many same element is present and if there is any single element which are unique then next loop going to print it  
//             }                            // iss loop jo bhi elements same honge wo sb -1 se replace ho jayenge 
//         }
//     }

//     int unique =0;
//     for(int k=0; k<size; k++){
//         if(arr[k]>0){                // and iss koop se jo bhi unique number hoga basically jo bhi 0 se bada number hoga wo print ho jayega 
//             unique = arr[k];        // coz jo bhi similar number h wo toa -1 se replace ho gye 
//             cout<<unique<<endl;
//         }
//     }
//     return 0;
// }


//given array and a number "x". find tout if "x"lies in the array or not if yes then print the index 

//if u want to find only one index than u can use break statement but if u want to know all index where 4 is present than don't use break statement

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,1,3,4,6,5,2,4,1};
//     int size = 10;
//     int x=4;
//     for(int i=0; i<size; i++){
//       if(arr[i]==x){
//         cout<<"element is present in the array : - "<<i<<endl;
//         //break
//       }
//     }
//   return 0;
// }



//wap to find a duplicate elements from a given array of integer 

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[7] = {1, 2, 3, 2, 4, 5, 1};
//     int size = 7;

//         cout << "Duplicate elements: ";


//     for(int i = 0; i < size; i++){
//         for(int j = i + 1; j < size; j++){
//             if(arr[i] == arr[j]){
//                 cout << arr[i] << " ";
//                 break;   // same element ko baar‑baar print hone se rokta hai
//             }
//         }
//     }
//     return 0;
// }




//given an array containing elements from 1 to 100 except one elments in the range is missing find the missing elemnt

#include<iostream>
using namespace std;

int main(){
    int arr[99] = {
        // assume array has numbers from 1 to 100 except one missing
    };

    int size = 99;
    int totalSum = (100 * 101) / 2;  // sum of 1 to 100
    int arraySum = 0;

    for(int i = 0; i < size; i++){
        arraySum += arr[i];
    }

    int missing = totalSum - arraySum;

    cout << "Missing element is: " << missing;

    return 0;
}