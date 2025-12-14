//it have basically two or more dimentions. the two dimentional array is also called matrix 

//datatype array_name[r][c]

// this is a 2D array where r depicts number of rows in matrics and depicts number of columns in the matrix 

///       0  1  2  3  4  5
//  phy  12 23 33 54 66 77
// chem  77 34 22 89 76 54
// maths 78 99 32 98 43 22



//style - 1 to print  2d array 

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[2][2];
//     arr[0][0] = 12;
//     arr[0][1] = 3;
//     arr[1][0] = 13;
//     arr[1][1] = 45;

//     //1 2
//     //3 4

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }





//style 2--- 

// #include<iostream>
// using namespace std;
// int main(){

//     //1 2
//     //3 4

//     int arr[2][2]={{1,2},{3,4}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



//style 3---- main


// #include<iostream>
// using namespace std;
// int main(){

//     //1 2 5
//     //3 4 6

//     int arr[2][3]={{1,2,5},{3,4,6}};
//     int row=2;
//     int coloumn=3;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<coloumn; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



//taking input 

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[2][3]={{1,2},{3,4}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout<<"enter the element : ";
//             cin>>arr[i][j];
//         }
//     }
//     //1 2
//     //3 4


//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



//taking input of row and coloumns 

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"enter the numbers of row : "<<endl;
//     cin>>r;

//     int c;
//     cout<<"enter the number of coloumns : "<<endl;
//     cin>>c;

//     int arr[r][c]={{1,2},{3,4}};
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             cout<<"enter the element : ";
//             cin>>arr[i][j];
//         }
//     }
//     //1 2
//     //3 4


//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



// arr[][3] style ------

#include<iostream>
using namespace std;
int main(){

    //1 2 5
    //3 4 6

    int arr[][3]={12,23,34,35,65,76};
    
    int coloumn=3;
    int row =2;
    for(int i=0; i<row; i++){
        for(int j=0; j<coloumn; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


// declaration

// int arr[4][2]={{23,24},{25,26},{45,43},{53,23}};
// int arr[4][2]={12,23,24,31,22,11,13,15};
// int arr[][3]={12,23,34,35,65,76};