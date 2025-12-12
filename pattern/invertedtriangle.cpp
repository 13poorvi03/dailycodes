// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter a number : ";
//      int n; 
//      cin>>n;
//     for(int i=0 ; i<=n; i++){
//         for(int j=i+1; j<=n; j++){
//             cout<<" * ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
     int n; 
     cin>>n;
    for(int i=0 ; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
    return 0;
}