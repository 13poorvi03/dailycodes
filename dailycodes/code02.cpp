//pattern : target sum 

//find the total number of pairs in the array whose sum is equal to the given value of x

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,4,6,7,1};
//     int targetsum =7;
//     int size=5;
//     int pairs=0;
//     for(int i=0; i<size;i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]+arr[j]==targetsum){
//                 pairs++;
//             }
//         }
//     }
//     cout<<pairs<<endl;
//     return 0;
// }



//code 2---->

//count the number of triplets whose sum is equal to the given value x

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,10,12,13,20};
//     int targetsum =35;
//     int size=5;
//     int pairs=0;
//     for(int i=0; i<size;i++){
//         for(int j=i+1; j<size; j++){
//             for(int k=j+1;k<size;k++){
//             if(arr[i]+arr[j]+arr[k]==targetsum){
//                 pairs++;
//               }
//             }

//         }
//     }
//     cout<<pairs<<endl;
//     return 0;
// }


//code 4------>

// array manupulation 

//find the unique number in a given array where all the elements are being repeated twice with one value being unique 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,1,3,4,6,5,2,4,1};
//     int size = 10;
//     for(int i =0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]==arr[j]){
//                 arr[i]=arr[j]= -1;
//             } 
//         }
//     }

//     int unique =0;
//     for(int k=0; k<size; k++){
//         if(arr[k]>0){
//             unique = arr[k];
//             cout<<unique<<endl;
//         }
//     }
//     return 0;
// }




//code ------>

//find the second largest in the given array

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[6] = {12, 11, 23, 45, 2, 10};

//     int max = INT_MIN;   // sabse bada
//     int smax = INT_MIN;  // second bada

//     for(int i = 0; i < 6; i++){
        
//         // agar current element max se bada hai
//         if(arr[i] > max){
//             smax = max;      // purana max ab second max ban jayega
//             max = arr[i];    // new max
//         }
//         // agar current element second max se bada hai
//         else if(arr[i] > smax && arr[i] != max){
//             smax = arr[i];
//         }
//     }

//     cout << "Second maximum = " << smax;
//     return 0;
// }


