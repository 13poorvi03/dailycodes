#include <iostream>   
using namespace std;  

int maze(int n, int m) {
    int rightways =0;
    int downways =0 ;
     if( n==1 && m==1) return 1;

     if(n==1){//cananot go down 
       rightways += maze(n,m-1);
     }
     if(m==1){ //cannot go right 
        downways+=maze(n-1,m);
     }
     if(n>1 && m>1){
          rightways += maze(n,m-1);
          downways+=maze(n-1,m);

     }
    int totalways = rightways + downways;
    return totalways;
}

int main() {
    int n, m;  
    cout << "Enter no of rows of the maze : ";
    cin >> n;
    cout << "Enter no of columns of the maze : ";
    cin >> m;

    int numways = maze(n,m);
    cout << "Total ways = " << numways << endl;

    return 0;  
}
