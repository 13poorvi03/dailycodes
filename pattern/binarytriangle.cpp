
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
     int n; 
     cin>>n;
    for(int i=1 ; i<=n; i++){        //no of line / rows 
        for(int j=1; j<=i; j++){     //no of coloumns 
            cout<<(j%2!=0)<<" ";

        }
        cout<<endl;
    }
    return 0;
}
