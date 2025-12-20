//maze path ---- u only have to go DOWN or RIGHT " 1 step at a time " find num of ways

#include <iostream>
using namespace std;

int maze(int cr, int cc, int er, int ec) {
    // Base case: reached destination
    if (cr == er && cc == ec) return 1;

    // Out of bounds: invalid path
    if (cr > er || cc > ec) return 0;

    // Recursive calls: move right or move down
    int rightways = maze(cr, cc + 1, er, ec);
    int downways = maze(cr + 1, cc, er, ec);

    return rightways + downways;
}

int main() {
    int n, m;
    cout << "Enter no of rows of the maze : ";
    cin >> n;
    cout << "Enter no of columns of the maze : ";
    cin >> m;

    int numways = maze(1, 1, n, m);
    cout << "Total ways = " << numways << endl;

    return 0;
}












// #include<iostream>
// using namespace std;

// int maze(int cr, int cc , int er , int ec ){
//    if(cr==er ){

//    }
//    if(cr==er)
   
//     int rightways= maze(cr,cc+1,er,ec) ;
//     int downways = maze(cr+1,cc,er,ec);
//     int totalways = rightways+downways;
//     return totalways;
// }
// int main() {
//     int n,m;
//     cout << "Enter no of rows of the maze : ";
//     cin >> n;
//     cout << "Enter no of coloumns of the maze : ";
//     cin >> m;
      
//     int numways = maze(1,1,n,m);
//     cout<<numways;
//     return 0;
// }