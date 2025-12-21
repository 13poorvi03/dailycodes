//maze path ---- u only have to go DOWN or RIGHT " 1 step at a time " find num of ways

#include <iostream>   // Input/Output stream header file
using namespace std;  // Standard namespace use

// Recursive function to count number of ways in a maze
int maze(int cr, int cc, int er, int ec) {
    // ✅ Base case: Agar current position destination par hai
    if (cr == er && cc == ec) 
        return 1;  // Ek valid path mil gaya

    // ❌ Out of bounds case: Agar row ya column limit cross ho gayi
    if (cr > er || cc > ec) 
        return 0;  // Invalid path, count = 0

    // 🔁 Recursive calls: Do possibilities
    // 1. Right move (column +1)
    int rightways = maze(cr, cc + 1, er, ec);

    // 2. Down move (row +1)
    int downways = maze(cr + 1, cc, er, ec);

    // ✅ Total ways = right se jane wale + down se jane wale
    return rightways + downways;
}

int main() {
    int n, m;  // Maze ke rows (n) aur columns (m)

    // User se input lena
    cout << "Enter no of rows of the maze : ";
    cin >> n;
    cout << "Enter no of columns of the maze : ";
    cin >> m;

    // Function call: Start (1,1) se End (n,m) tak
    int numways = maze(1, 1, n, m);

    // Output: Total number of ways
    cout << "Total ways = " << numways << endl;

    return 0;  // Program successful end
}

// cr = current row 
//cc = current coloumn 
//er= ending row 
//ec= ending coloumn 
//n= rows 
//m = coloumns 








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