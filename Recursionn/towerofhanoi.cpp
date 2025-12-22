
// tower of harnoi ---->

// #include<iostream>
// using namespace std;
// void tower(int n, char s, char h, char d){
//     if(n==0) return;
//   tower(n-1,s,d,h);
//   cout<<s<<" to "<<d<<endl;
//   tower(n-1,h,s,d);
//   return ;
// }
// int main(){
//     int n;
//     cout<<"enter a number  of disks : ";
//     cin>>n;
//     tower(n,'A','B','C');
//     return 0;
// }









////same code but adding explination ------------>

#include<iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
// Parameters:
// n -> number of disks
// s -> source rod (jahan se disk uthani hai)
// h -> helper rod (temporary rod jo beech me use hoti hai)
// d -> destination rod (jahan disk ko rakhna hai)
void tower(int n, char s, char h, char d){
    // Base case: agar 0 disks hain to kuch nahi karna
    if(n==0) return;

    // Step 1: Move (n-1) disks from source to helper rod
    // yahan destination rod ko helper ke tarah use kar rahe hain
    tower(n-1, s, d, h);

    // Step 2: Move nth (largest) disk from source to destination
    cout << s << " to " << d << endl;

    // Step 3: Move (n-1) disks from helper rod to destination rod
    // yahan source rod ko helper ke tarah use kar rahe hain
    tower(n-1, h, s, d);

    return;
}

int main(){
    int n;
    cout << "enter a number of disks : ";
    cin >> n;

    // Function call: initially
    // 'A' = source rod
    // 'B' = helper rod
    // 'C' = destination rod
    tower(n, 'A', 'B', 'C');

    return 0;
}