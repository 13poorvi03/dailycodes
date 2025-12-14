// git status
// git add twodarray.cpp
// git commit -m "updated twodarray.cpp"
// git push



//wap to store roll number and marks obtained by 4 students side by side ina a matrix 

#include<iostream>
using namespace std;
int main(){

    int r;
    cout<<"roll numbers : ";
    cin>>r;

    int c;
    cout<<"student's marks : "; 
    cin>>c;

    int arr[r][c];
    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<" enter the  sub : "<<endl;

            cin>>arr[i][j];
        }
    }
    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     return 0;
}