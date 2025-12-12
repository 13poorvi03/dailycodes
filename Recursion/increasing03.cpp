//print 1 to n


#include<iostream>
using namespace std;

void increasing(int  x, int n){
    if(x>n) return;
    cout<<x<<endl;
    increasing(x+1,n);
    return ;
}

int main(){
    int n;
    cout<<" enter a number : ";
    cin>>n;
    increasing(1,n);
    return 0;
}
