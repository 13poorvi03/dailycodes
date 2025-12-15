// vectors in c++ is a dynamic array provided by the standard template library (STL) that can grow or shrink in size automatically at runtime 
//it can change size dynamically 
//it mangae memory automatically 
//it provide many built in function 
//it is safer and more flexible than raw array 
//contiguous memory allocation 




//basics operation 

// 1. declareation operation 
// #include<vector>
//vector<<datatype>vector-name
//if u want to declare size than #include<datatype>vector-name(size)

//example---
//vector<int> v(5);


// 2. size operation 
//v.size() --- gives length


// 3. reszie operation
//ex------ 1,2,3,4 -- v.size(4)
// if u want to rezie the vector --- v.reszie(new size);
//v.rezie(8);
// now when we ask vector size so it come -- v.size ()=8


// 4. capacity operation 

// v.capacity();
//capacity>=size;  /// capacity of vector is always more than or equal to the size of vector 
//apne aap apne aap ko change karti h according to the size of vector
// vectors apni capacity ko automatically increase krta h jab size capacity se zyzda ho jye or usualllu capacity double ho jati h
//size - kitne elements currently store hain
//capacity- kitne elemnets store kr skte h without reallocation 
//capacity in crease in 2 ki power basicallly 
//ex- 0 1 2--- size=3 but capacity =4
//ex 0 1- size=2, capacity =1
//ex 0 1 2 3 4 size=5 capacity=8
//the capacity is copiler depended



// 5. add elements

//v.push back(element)
//push_back is a memeber function of the c++ vector class that adds a new element at the end of the vector increasing its size by one 
//ex- vector<int> v;
// v.push_back(10);   // v = {10}
// v.push_back(20);   // v = {10, 20}


// 6. insert operation 

//v.insert(position,element)
//insert()is a vector function in c++ that adds an elements at a specified position inside the vector 
//all existing elements from that position onward are shifted one step to the right 
//position -- an iterator pointing to the location where the new elements should be inserted 
//elements -- the value to be inserted 

//ex ---vector<int> v = {10, 20, 30};
// v.insert(v.begin() + 1, 99);  
// Result: {10, 99, 20, 30}


// 6.  begin operation 

//v.begin();
// begin() is a member function of the c++ vector class that returns an iterator pointing ro the first elements of the vector 
//it returns  an iterator to the first element 

//ex----vector<int> v = {10, 20, 30};
// auto it = v.begin();   // it points to 10



// 7. end operation 

//v.end();
//end() is a vector function that return an iterator pointing to the position just after the last elemnts of the vector 
// it does not point to the last elements
//it point to a past the end position (an valid elemnet)
//used mainly for iteration and alogrithm 

//ex---vector<int> v = {10, 20, 30};
// auto it = v.end();   // points after 30 (not to 30)



// 8. delete operation 

//v.pop_back();
//pop_back() is a vector function in c++ that removes the last elements from the vector .
//it reduces the size by 1 but does not return the revoved element.
//it delete the last elemnt of the vector 
//capacity usually remains unchanges 
//safe only if the vector is not empty

//ex----vector<int> v = {10, 20, 30};
// v.pop_back();  
// v becomes {10, 20}


// 9. erase operation 

//v.erase(position);
//erase() is a vector function in c++ that removes the elemnt at he given position (specified using an iterator )
//all elemnts after that position shift one step left to the gap 
//position -- an iterator pointing to the elemnt you want to delete 

//ex---vector<int> v = {10, 20, 30, 40};
// v.erase(v.begin() + 1);  
// Result: {10, 30, 40}


// 10. operation 

//v.erase(v.end()-2);
// v.end() points one position past the last elements
//so v,end()-2 points to the second last elem of the vector 
// v.erase(v.end()-2); removes the second last elem of the vector

//ex---vector<int> v = {10, 20, 30, 40, 50};
// v.erase(v.end() - 2);  
// Removes 40 (second last element)

// Result: {10, 20, 30, 50}


// 11. clear operation 

//v.clear();
//clear() is a vector function in c++ that removes all elements from the vector making its size 0;
//delete all elements instide the vector 
//size becomes 0 but,
//capacity remains unchanged (memory is not feed)

//ex--vector<int> v = {10, 20, 30};
// v.clear();
// // v becomes {}
// // v.size() = 0