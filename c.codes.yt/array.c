//given an aray of marks of student if the mark of any student is less than 35 print its roll number 

// #include<stdio.h>
// int main(){
//     int marks[10]={23,45,67,77,88,33,46,87,66,32};
//     for(int i=0;i<10;i++){
//         if(marks[i]<35){
//           printf(" %d ",i);
//         }
        
//     }

//     return 0;
// }

//code 2------>

//calculate the suj of all the elements in the given array 
// #include<stdio.h>
// int main(){
//        int arr[5]={4,5,6,3};
//        int sum =0;
//        for(int i=0;i<5;i++){
//           sum+=arr[i];       //sum mae aray ka element + karte jao 
//        }
//        printf("%d",sum);
//        return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a the size of array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//        return 0;
// }


//FUNCTION ARRAY

// #include<stdio.h>
// void fun(int x[]){
//     int temp =x[0];
//     x[0]=x[1];
//     x[1]=temp;
//     return;
// }
// int main(){
//     int arr[2]={2,9};
//     printf("%d %d\n",arr[0],arr[1]);
//     fun(arr);
//     printf("%d %d\n",arr[0],arr[1]);         //address of the first element of the array
//     return 0;                                 //so array ke first element ka hi address pure array ka address hum kahete h
// }


//given an array of integer changes the value of all odd indexed elements to its second multiple and increment all even indexed value by 10

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     for(int i=0; i<7; i++){
//         if(i%2!=0){
//             arr[i]=arr[i]*2;
//         }
//         else{
//             arr[i]=arr[i]+10;
//         }
//     }
//         for(int i=0; i<7; i++){
//             printf(" %d ",arr[i]);
//         }
    

//     return 0;
// }



//count the number of elements in given array greater than a given number x

// #include <stdio.h>
// int main() {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int x = 3;
//     int count = 0;

//     // Count how many elements are greater than x
//     for (int i = 0; i < 7; i++) {
//         if (x < arr[i]) {
//             count++;
//         }
//     }

//     // Print the array
//     for (int i = 0; i < 7; i++) {
//         printf(" %d ", arr[i]);
//     }

//     // Print the count
//     printf("\nNumber of elements greater than %d = %d\n", x, count);

//     return 0;
// }


//find the difference between the sum of elements at even indices to the sum of elements at odd indices.

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int sumofEven =0;
//     int sumofOdd =0;
//     for(int i=0; i<7;i++){
//         if (i%2==0){
//             sumofEven+=arr[i];
//         }
//         else{
//             sumofOdd+=arr[i];
//         }
//     }
//     printf("%d sum of even indices :\n",sumofEven);

//     printf("%d sum of odd indices :\n",sumofOdd);

//     int res=sumofEven - sumofOdd;
//     printf("%d",res);

//     return 0;
// }



//find the total number of pairs in the array whose sum is equal to the given value x

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int totalpairs =0;
//     int x= 5;
//     for(int i=0; i<7;i++){
//        for(int j=i+1;j<7;j++){
//        if(arr[i]+arr[j]==x){
//         totalpairs++;
//         printf("(%d,%d)\n",arr[i],arr[j]);
//        }
//     }

//    }
//    printf("%d",totalpairs);
//    return 0;
// }


//count the number of triplets whose sum is equal to the given value x.

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int totalpairs =0;
//     int x= 15;
//     for(int i=0; i<7;i++){
//        for(int j=i+1;j<7;j++){
//         for(int k=j+1;k<7;k++){
//        if(arr[i]+arr[j]+arr[k]==x){
//         totalpairs++;
//         printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
//        }
//     }
//        }

//    }
//    printf("%d",totalpairs);
//    return 0;
// }


//find the second largest element in the given array

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int max = arr[0];
//     int smax=arr[0];

//     for(int i=0; i<7;i++){
//         if(max<arr[i]){
//             max=arr[i];     ///for first largest
//         }
//     }

//         for(int i=0; i<7;i++){
//         if(arr[i]!=max && smax<arr[i]){   ////for second largest
//             smax=arr[i];
//         }
//     }

//     printf("%d",smax);
//     return 0;

    
// }



//for negative integers

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[7]={-1,-2,-3,-4,-5,-6,-7};
//     int max = INT_MIN;
//     int smax= INT_MIN;

//     for(int i=0; i<7;i++){
//         if(max<arr[i]){
//             max=arr[i];     ///for first largest
//         }
//     }

//         for(int i=0; i<7;i++){
//         if(arr[i]!=max && smax<arr[i]){   ////for second largest
//             smax=arr[i];
//         }
//     }

//     printf("%d",smax);
//     return 0;

    
// }



// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int arr[7] = {-1, -2, -3, -4, -5, -6, -7};
//     int min = INT_MAX;
//     int smin = INT_MAX;

//     for (int i = 0; i < 7; i++) {
//         if (arr[i] < min) {
//             smin = min;   // old min becomes second smallest
//             min = arr[i]; // update smallest
//         } else if (arr[i] < smin && arr[i] != min) {
//             smin = arr[i];
//         }
//     }

//     printf("Smallest = %d\n", min);
//     printf("Second smallest = %d\n", smin);

//     return 0;
// }




 // useINT_MIN when searching for maximum number

// use INT_MAX when searching for minimum number 




//code------>

//wap to copy the contents of one array into another in the reverse order 

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int brr[5];

//     for(int i=0; i<=4;i++){
//         brr[i]=arr[4-i];
//     }
//         for(int i=0; i<=4;i++){
//             printf("%d",brr[i]);
//         }
//         return 0;
// }



//code---->

//wap to reverse the array using extra array

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int brr[5];

//     for(int i=0; i<=4;i++){
//         brr[i]=arr[4-i];
//     }
//         for(int i=0; i<=4;i++){
//         arr[i]=brr[i];
//     }

//         for(int i=0; i<=4;i++){
//             printf("%d",arr[i]);
//         }
//         return 0;
// }


//code ------------>

//wap to reverse the array without using any extra array 

// #include<stdio.h>
// void reverse(int arr[]){
//     int i = 0;
//     int j = 4;
//     while (i<=j){
//     ///swap arr[i] and arr[j]

//     int temp =arr[i];  //temp mae arr[i] kki value daali 
//     arr[i]= arr[j];   // arr[i] mae arr[j] ki value daali then 
//     arr[j]= temp;     //arr[j] mae temp ki value daaldoooo

//     i++;
//     j--;
//     }
//     return ;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     reverse(arr);
//     for(int i =0; i<=4; i++){
//         printf(" %d " , arr[i]);
//     }
//     return 0;
// }


//similar code in for loop

// #include<stdio.h>
// void reverse(int arr[]){

//    for(int i=0, j=4; i<j;i++,j--){
//     ///swap arr[i] and arr[j]

//     int temp =arr[i];  //temp mae arr[i] kki value daali 
//     arr[i]= arr[j];   // arr[i] mae arr[j] ki value daali then 
//     arr[j]= temp;     //arr[j] mae temp ki value daaldoooo

    
//     }
//     return ;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     reverse(arr);
//     for(int i =0; i<=4; i++){
//         printf(" %d " , arr[i]);
//     }
//     return 0;
// }


//code ------>

// if an array arr contains n elements then check if the given arry is a palindrome or not 

// #include <stdio.h>

// int isPalindrome(int arr[], int n) {
//     int i = 0, j = n - 1;
//     while (i < j) {    // i is less than j 
//         if (arr[i] != arr[j]) {
//             return 0; // not palindrome
//         }
//         i++;
//         j--;
//     }
//     return 1; // palindrome
// }

// int main() {
//     int arr[5] = {1, 2, 3, 2, 1};
//     int n = 5;

//     if (isPalindrome(arr, n)) {
//         printf("Array is Palindrome\n");
//     } else {
//         printf("Array is NOT Palindrome\n");
//     }

//     return 0;
// }


//code------>

//wap to rotate middle elements of an array 

// #include<stdio.h>
// void reverse(int arr[]){
//     int i = 3;
//     int j = 6;
//     while (i<=j){
//     ///swap arr[i] and arr[j]

//     int temp =arr[i];  //temp mae arr[i] kki value daali 
//     arr[i]= arr[j];   // arr[i] mae arr[j] ki value daali then 
//     arr[j]= temp;     //arr[j] mae temp ki value daaldoooo

//     i++;
//     j--;
//     }
//     return ;
// }
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     reverse(arr);
//     for(int i =0; i<=7; i++){
//         printf(" %d " , arr[i]);
//     }
//     return 0;
//}

//code --->          u have to sry run

//similar code with different type

// #include<stdio.h>
// void reverse(int arr[],int a,int b){
//     for(int i=a, j=b; i<j;i++,j--){
//     ///swap arr[i] and arr[j]

//     int temp =arr[i];  //temp mae arr[i] kki value daali 
//     arr[i]= arr[j];   // arr[i] mae arr[j] ki value daali then 
//     arr[j]= temp;     //arr[j] mae temp ki value daaldoooo

//     i++;
//     j--;
//     }
//     return ;
// }
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     reverse(arr,1,4);
//     for(int i =0; i<=7; i++){
//         printf(" %d " , arr[i]);
//     }
//     return 0;
// }



//code---->

//roatate the given array 'a' by k steps , where k is non negative 

// note k can be greater than n as well where n is the size of array 'a'.

// #include<stdio.h>
// void reverse(int arr[], int si, int ei){

//    for(int i=si, j=ei; i<j;i++,j--){
//     ///swap arr[i] and arr[j]

//     int temp =arr[i];  //temp mae arr[i] kki value daali 
//     arr[i]= arr[j];   // arr[i] mae arr[j] ki value daali then 
//     arr[j]= temp;     //arr[j] mae temp ki value daaldoooo

    
//     }
//     return ;
// }

// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int n =7;
//     int k=30;
//     //step 1
//     k=k%n;

//     //step 2
//     reverse(arr,0,n-1);
//     //step 3
//     reverse(arr,0,k-1);
//     //step 4
//     reverse(arr,k,n-1);
//     for(int i =0; i<=7; i++){
//         printf(" %d " , arr[i]);
//     }
//     return 0;
// }


//code----->

// given an array containg elements from 1 to 100 except one elemenet in this range is missing find the missing element

#include <stdio.h>

int main() {
    int arr[99]; // array of size 99 (since one number missing)
    int n = 100;
    int expectedSum = n * (n + 1) / 2; // sum of 1 to 100
    int actualSum = 0;

    // Example: fill array with numbers 1 to 100 except 57
    for(int i = 0, j = 1; j <= n; j++) {
        if(j == 57) continue; // skip 57
        arr[i++] = j;
    }

    // Calculate actual sum
    for(int i = 0; i < 99; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;
    printf("Missing number is: %d\n", missing);

    return 0;
}




//code ------>

//given an array 'a' and a number 'x' find out if x lies in the array or not ,if yes then print the index


// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int x =4;
//     for(int i=0; i<=6; i++){
//         if(arr[i]==x){
//             printf("%d is present in the array and its index is %d",x,i);
//             break;
//         }
//     }
//     return 0;
// }