// wap to sum of first N natural number 

#include<iostream>
using namespace std;
int naturalnum(int n){
    if(n==1 || n==0){ 
    return 1;
    }
     return n+naturalnum(n-1);

}
int main(){
 int n;
 cout<<"enter the number : ";
 cin>>n;
 naturalnum(n);
 cout<<naturalnum(n)<<endl;
 return 0;
}