
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





#include<iostream>
#include<climits>
using namespace std;

// ✅ Function: sirf largest number return karega
int largestno(int arr[], int size){
    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {22, 33, 21, 23, 45, 67, 23, 55, 45, 65};
    int size = 10;

    // ✅ Step 1: First largest using function
    int firstLargest = largestno(arr, size);

    // ✅ Step 2: Second largest logic (MAIN me)
    int secondLargest = INT_MIN;

    for(int i = 0; i < size; i++){
        // jo first largest ke equal na ho
        // aur secondLargest se bada ho
        if(arr[i] != firstLargest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    cout << "First Largest = " << firstLargest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}


// note is code ka logic h ki hum phale first largest ko fix kregenge usko phale traverse krege then condition lgagenge ki jo arr ka element h wo first largest ke equal na ho and second largest se element bada ho toa uss element ko update krwa do second largest mae 
