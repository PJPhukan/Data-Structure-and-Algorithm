// Symbol table:-> Symbol table is an important data structure created and maintained by the compiler in order to keep track of sometimes of variables i.e it stores information about the scope and binding information about instances of various entites such as variable and fucntion names,classes ,object etc.
//  eg-> variable name ->address of the variable

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
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

    return 0;
}