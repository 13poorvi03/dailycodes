//print sum from 1 to n (return type)

#include<iostream>
using namespace std;

int sum(int n){
    if(n==0 || n==1) return 1;
    return n+sum(n-1);
}
int main(){
  
  int n;
  cout<<"enter the number : ";
  cin>>n;
  sum(n);
  cout<<sum(n)<<endl;
  return 0;
}