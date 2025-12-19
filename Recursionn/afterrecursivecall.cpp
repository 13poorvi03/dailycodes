// print 1 to n (afteer recursive call)

#include<iostream>
using namespace std;
void increasing(int n){
  if(n==0) return ;


    increasing(n-1);
        cout<<n<<endl;
    return ;
  
}
int main(){
  
  int n;
  cout<<"enter the number : ";
  cin>>n;
  increasing(n);
  return 0;
}