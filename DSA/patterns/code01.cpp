//square pattern 

// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int i=0; i<4;i++){  //outer 
//         for(int i=0; i<4; i++){  //inner
//          cout<<" * ";

//         }
//         cout<<endl;
//     }
   
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=1; i<n;i++){  //outer for lines for coloumn 
        for(int j=1; j<n; j++){  //inner for rows
         cout<<j;

        }
        cout<<endl;
    }
   
    return 0;
}