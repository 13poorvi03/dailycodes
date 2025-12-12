//calculate the sum of array

// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5]={2,3,4,5,6};
//     //int size =sizeof(array)/sizeof(array[0]);

//     int sum =0;               //sum mae hum value store karte jayenge like 0+arr[0]=2 then sum=2+arr[1]=3 then in the end sum =14+arr[4]=20 
//     for(int i=0; i<5;i++){
//          sum +=arr[i];
//         }
//         cout<<sum<<endl;
//         return 0;
// }


//find the maximum value out of all the elements in array

#include<iostream>
using namespace std;
int main(){
    
    int arr[5]={12,34,23,45,33};
    int max=arr[0];
    for(int i=0;i<5;i++){
       if(arr[i]>max){
        max=arr[i];
       }
    }
    cout<<max<<endl;
    return 0;
}