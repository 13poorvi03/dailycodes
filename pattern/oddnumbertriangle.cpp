

#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
     int n; 
     cin>>n;
    for(int i=0 ; i<=n; i++){        //no of line / rows 
        for(int j=0; j<=i; j++){ 
              if(j%2!=0 ){                       //no of coloumns 
            cout<<j<<" ";
              }
        }
        cout<<endl;
    }
    return 0;
}
