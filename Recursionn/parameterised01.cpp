//print sum from 1 to n (parameterised)

#include<iostream>
using namespace std;
void sum(int n, int s){
    if(n==0){
      cout<<s<<endl;
      return ; 
    } 
     sum(n-1,s+n);
     
    return ;
}
int main(){
  
  int n;
  cout<<"enter the number : ";
  cin>>n;
  sum(n,0);
  return 0;
}




















//non recursive code--------

// #include<iostream>
// using namespace std;
// void sum(int n){
//   int s=0;
//   for(int i=1; i<=n; i++){
//     s=s+i;

//   }
//   cout<<s<<endl;
// return ;
// }
// int main(){
  
//   int n;
//   cout<<"enter the number : ";
//   cin>>n;
//   sum(n);
//   return 0;
// }