//find the unique number in a given array where all the elements are being repeated twice with one value being unique 

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,3,4,6,5,2,4,1};
    int size = 10;
    for(int i =0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){           //all this loop is for traversing array to find is there any unique element is present
                arr[i]=arr[j]= -1;       // basically this loop is finding how many same element is present and if there is any single element which are unique then next loop going to print it  
            }                            // iss loop jo bhi elements same honge wo sb -1 se replace ho jayenge 
        }
    }

    int unique =0;
    for(int k=0; k<size; k++){
        if(arr[k]>0){                // and iss koop se jo bhi unique number hoga basically jo bhi 0 se bada number hoga wo print ho jayega 
            unique = arr[k];        // coz jo bhi similar number h wo toa -1 se replace ho gye 
            cout<<unique<<endl;
        }
    }
    return 0;
}


