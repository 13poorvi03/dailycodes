//code 1----

// #include<iostream>      // Input-output stream for cout, endl
// #include<vector>        // Header file for using std::vector
// using namespace std;    // To avoid writing std:: again and again

// int main(){
//     vector<int> v;      // Creates an empty vector of integers
//                         // size = 0, capacity = 0 initially

//     cout<<"size: "<<v.size()<<endl;        // Prints current size (0)
//     cout<<"capacity: "<<v.capacity()<<endl; // Prints current capacity (0)

//     v.push_back(1);     // Adds 1 element at the end
//                         // Vector was empty → capacity increases (usually to 1)

//     cout<<"size: "<<v.size()<<endl;        // size becomes 1
//     cout<<"capacity: "<<v.capacity()<<endl; // capacity becomes 1

//     v.push_back(1);     // Adds another element
//                         // Capacity was full → vector reallocates memory
//                         // Capacity usually doubles → becomes 2

//     cout<<"size: "<<v.size()<<endl;        // size becomes 2
//     cout<<"capacity: "<<v.capacity()<<endl; // capacity becomes 2

//     v.push_back(1);     // Adds third element
//                         // Capacity 2 was full → reallocation happens again
//                         // Capacity usually doubles → becomes 4

//     cout<<"size: "<<v.size()<<endl;        // size becomes 3
//     cout<<"capacity: "<<v.capacity()<<endl; // capacity becomes 4

//     v.resize(5);        // Changes size to 5
//                         // Adds 2 extra default-initialized elements (value = 0)
//                         // resize() increases size but does NOT reduce capacity
//                         // If new size > capacity → capacity increases
//                         // Here capacity is already 4, new size is 5 → capacity grows

//     cout<<"size: "<<v.size()<<endl;        // size becomes 5
//     cout<<"capacity: "<<v.capacity()<<endl; // capacity becomes >= 5 (usually 8)

//     return 0;           // End of program
// }



//code---2

