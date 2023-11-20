// Symbol table:-> Symbol table is an important data structure created and maintained by the compiler in order to keep track of sometimes of variables i.e it stores information about the scope and binding information about instances of various entites such as variable and fucntion names,classes ,object etc.
//  eg-> variable name ->address of the variable

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
     /*

    int x = 5;
    cout << " Value of x is : " << x << endl;

    // Address of operator &
    cout << "Address of x is : " << &x << endl;

    // Pointer is a variable which stores the address of another variable
    // It's Initialize with *
    int *ptr = &x; // ptr stores address of x
    cout << "Address of x is (print using ptr pointer) :" << ptr << endl;
    cout << "Value of x is (print using ptr pointer) :" << *ptr << endl; // Here * dereference operator

    cout << "Size of integer x is : " << sizeof(x) << endl;
    cout << "Size of integer pointer ptr is : " << sizeof(ptr) << endl;

    // copying
    int *y = NULL; // initialize with null value
    y = ptr;       // y pointer point ptr;
    cout << "y: " << y << "---"
         << "ptr: " << ptr << endl;
    cout << "*y: " << *y << "---"
         << "*ptr: " << *ptr << endl;

    // Important concept
    int i = 8;
    int *ptri = &i;
    cout << (*ptri)++ << endl; //*ptri= *ptri+1
    cout << (*ptri) << endl;
    ptri++;//move to next address
    cout<<*ptri<<endl;

*/
     /*


          // POINTER WITH ARRAY

          int arr[10] = {0, 11, 22, 33, 44, 5, 6, 7, 8, 9}; // arr=arr[0]

          cout << "&arr[10] :" << &arr[0] << endl; // Print Address of arr[0]

          cout << "*arr :" << *arr << endl; // Print Address of arr[0] element

          cout << "*arr+1 :" << *arr + 1 << endl; // Print Address of arr[0+1] element

          // OR

          cout << "*(arr+1) :" << *(arr + 1) << endl; // Print Address of arr[0+1] element

          cout << "(*arr)+1 :" << (*arr) + 1 << endl; // Print  arr[0+1] element +1

          cout << "arr[2] :" << arr[2] << endl; // Print  arr[2] element

          cout << "arr[i] = *(arr+i):" << arr[2] << "=" << *(arr + 2) << endl; // Print  arr[2] element

          // OR both are same

          cout << "i[arr] = *(i+arr):" << 2 [arr] << "=" << *(2 + arr) << endl; // Print  arr[2] element

          //& OPERATOR

          int a[10] = {0, 11, 22, 33, 44};

          // Below print statement are same
          cout << " &a[0] :" << &a[0] << endl; // Address of the 0 index element
          cout << " &a :" << &a << endl;       // Address of the first  element
          cout << " a :" << a << endl;         // One array point the first element address


          int *p = &arr[0];
          cout << " p :" << p << endl;  // Print p pointer store address
          cout << "*p:" << *p << endl;  // Print p pointer pointer store address element
          cout << " &p:" << &p << endl; // Address of p pointer

          */
     return 0;
}