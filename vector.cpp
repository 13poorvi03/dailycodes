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



5. add elements
