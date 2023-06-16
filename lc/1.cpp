// // #include<iostream>
// // #include <vector>
// // using namespace std  ; 
// // class Solution {
// // public:
// //     vector<int> twoSum(vector<int>& nums, int target) {
// //         vector<int> ::iterator left = nums.begin()  ; 
// //         vector<int> ::iterator right = nums.end()  ; 

// //         while(1)
// //         {
// //             if(*left + *right > target)
// //             {
// //                 right = right-1 ; 
// //             }
// //             else if(*left + *right < target)
// //             {
// //                 left++ ; 
// //             }
// //             else if(*left + *right == target)
// //             {
// //                 vector<int> a  ; 
// //                 a.push_back( static_cast<int>(left - nums.begin()))  ;
// //                 a.push_back(static_cast<int>(right - nums.end()));
// //                 return  a  ;
// //             }
// //         }
// //     }
// // };
// // int main()
// // {
// //     Solution v ; 
// //     vector<int> b = {1,2,3,6,7,8} ; 
// //     v.twoSum( b,5 ) ; 
    
// // }
// // C++ code to demonstrate the working of
// // advance()
// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
      
//     // Declaring iterator to a vector
//     vector<int>::iterator ptr = ar.begin();
//     vector<int>::iterator ptrs = ar.end();
      
//     // Using advance() to increment iterator position
//     // points to 4
   
      
//     // Displaying iterator position
//     cout << "The position of iterator after  is : ";
//     cout << *ptr << " " << *ptrs;
      
//     return 0;
      
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){ 
//     vector<int> vec1;
//     int element, size;
//     cout<<"Enter the size of your vector"<<endl;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
       
//         vec1.push_back(12);
//         vector<int>::iterator ptr  = vec1.begin() ; 
//     }
//     display(vec1);    
//     return 0;
// }

// INTEGER VECTOR EXAMPLE
// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // declaration of vector container
    vector<int> myvector{ 1, 2, 3, 4, 5 };
 
    // using begin() to print vector
    for (vector<int>::iterator it = myvector.begin();
         it != myvector.end(); ++it)
        cout << ' ' << *it;
    return 0;
}