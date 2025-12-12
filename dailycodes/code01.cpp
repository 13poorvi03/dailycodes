// #include<iostream>
// using namespace std;
// int main (){
//     int array[]={1,2,3,4,5};
//     cout<<sizeof(array)<<endl;           //total size of array elements in array in bits 
//         cout<<sizeof(array)/sizeof(array[0])<<endl;   //total no of elements in array 
//         cout<<array[0]<<endl;
//         cout<<array[3];
//     return 0;
// }


//for taking inputs


// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[5];
//     for(int i=0; i<5;i++){
//         cout<<"enter a number : ";
//         cin>>arr[i];
    
//     }
//     for(int i=0; i<5; i++){
//       cout<<arr[i]<<" ";
//     }
        

//     return 0;
// }



//code01-------->

//calculate the sum of all the elements in the given array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={23,12,17,22,11};
//     int sum =0;
//     for(int i=0; i<5; i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }


//code 2---->

//wap to find the maximum value out of all the elements in the array 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={21,22,34,45,67,33};
//     int max=arr[0];
//     for(int i=0; i<6;i++){
//         if(max<arr[i]){
//             max= arr[i];
//         }
//     }
//     cout<<max<<endl;

//     return 0;
// }


//code 3------>

//wap to find the minimum value out of all the elements in the array 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={28,22,34,45,67,12};
//     int min=arr[0];
//     for(int i=0; i<6;i++){
//         if(min>arr[i]){
//             min= arr[i];
//         }
//     }
//     cout<<min<<endl;

//     return 0;
// }


//code 4----->

//LINEAR SEARCH 

//wap to search if a given elements is present in the array or not . If it is not present then return -1 else return the index 

// #include<iostream>
// using namespace std;

// int main(){
// int arr[6]={22,12,34,56,78,5};
// int target = 78;
// int ans=-1;
// for(int i=0; i<6; i++){
//     if(target==arr[i]){
//         ans=i;
//     }
    
// }
// cout<<ans<<endl;
// return 0;
// }