//print n to 1

#include<iostream>              // iostream header include for input-output operations
using namespace std;            // using standard namespace to avoid writing std:: everywhere

// Recursive function to print numbers in decreasing order
void decreasing(int n){         
    if(n==0) return ;           // Base case: if n becomes 0, stop recursion (no further calls)

    cout<<n<<endl;              // Print current value of n
    decreasing(n-1);            // Recursive call: function calls itself with n-1
    return ;                    // Return to previous function call (backtracking happens here)
}

// Main function: program execution starts here
int main(){                     
    int n;                      
    cout<<"enter the number : "; // Prompt user to enter a number
    cin>>n;                      // Take input from user and store in variable n
    decreasing(n);               // Call recursive function with user input
    return 0;                    // End of program
}