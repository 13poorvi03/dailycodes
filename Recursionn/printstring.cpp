
//print good morning 

#include<iostream>
using namespace std;
void greeting(int n){
  if(n==0){
   return ;
  }
    cout<<"good morning jii "<<endl;
    greeting(n-1);
    return ;
  
}
int main(){
  int main;
  int n;
  cout<<"enter the number : "<<endl;
  cin>>n;
  greeting(n);
  return 0;
}