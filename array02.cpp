//git add array01.cpp
//git commit -m "update"
//git push https://github.com/13poorvi03/dailycodes.git HEAD

//git commands to push code


//find the second largest elements in the given array 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//    int arr[6]={23,45,67,44,52,5};
//    int max=INT_MIN;
//    int smax=INT_MIN;
//    for(int i=0 ; i<6 ; i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
//    }
//    for(int j=0 ; j<6 ; j++){
//     if(arr[j]!=max && smax<arr[j]){
//         smax=arr[j];
//     }
//    }
//     cout<<max<<endl;
//      cout<<smax<<endl;
//     return 0;
// }


//find the third largest element in array 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//    int arr[6]={23,45,67,44,52,5};
//    int max=INT_MIN;
//    int smax=INT_MIN;
//    int tmax=INT_MIN;

//    //for first max 

//    for(int i=0 ; i<6 ; i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
//    }

//      //for second max

//    for(int j=0 ; j<6 ; j++){
//     if(arr[j]!=max && smax<arr[j]){
//         smax=arr[j];
//     }
//    }

//      // for third max

//     for(int k=0 ; k<6 ; k++){
//     if(arr[k]!=max && arr[k]!=smax && tmax<arr[k]){
//         tmax=arr[k];
//     }
//    }
//     cout<<max<<endl;
//      cout<<smax<<endl;
//      cout<<tmax<<endl;
//     return 0;



//wap to copy the contents of one array into another in the reverse order 


// hum ne isss code ki mistake se yeh sikha ki hum brrr mae copy kr rhe h toa hum brr mae elem store krenge issliye 
//phale brr likihenege and jo aar h usko hum last element se store krenge that 's why we use second loop j to print arr[j] in reverse order
//jisse ki we can store elemnts in brr[]


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {12, 23, 45, 67, 56};
//     int size = 5;
//     int brr[5];

//     for (int i = 0; i < size; i++) {
//         for (int j = size - 1 - i; j >= 0; j--) {
//             brr[i] = arr[j];
//             break;   // ek hi baar chalana hai
//         }
//     }

//     for (int i = 0; i < size; i++) {
//         cout << brr[i] << " ";
//     }

//     return 0;
// }




//wap to reverse the array without using any extra array 


//in this array hum ek extra or new variable temp banyenge and swap logic lagayenge reverse karne ke liye 
//temp mae hum phale arr[i] ki value store karenge then arr[i]empty ho jayega toa arr[i] mae arr[j ] ki value store kardenge and arr[j] mae temp ki jis array reverse ho jayega 
// and ismae hum arr[i] ko size/2 tak ki loop chalayenge to revrse


#include<iostream>
using namespace std;

int main(){
    int arr[5]={12,23,34,45,56};
    int size = 5;

    for(int i=0; i<size/2; i++){
        for(int j=size-1-i; j>=0; j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            break;   // inner loop sirf ek baar chalega
        }
    }

    for(int k=0; k<5; k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}