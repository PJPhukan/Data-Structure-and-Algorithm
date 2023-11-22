// Symbol table:-> Symbol table is an important data structure created and maintained by the compiler in order to keep track of sometimes of variables i.e it stores information about the scope and binding information about instances of various entites such as variable and fucntion names,classes ,object etc.
//  eg-> variable name ->address of the variable

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// POINTER WITH FUNCTIONS

void Print(int *p)
{
     cout << "p :" << p << endl;    // Print ,pointer storing address
     cout << "*p  :" << *p << endl; // Print ,pointer storing address value
}

void Update(int *p)
{
     /*
          p = p + 1; // Only updated inside the fucntion
          cout << "Inside p :" << p << endl;
     */

     /*
          *p = *p + 10; //Value updated for holl program
          cout << "Inside *p :" << *p << endl;
     */
}

// int Get_Sum(int arr[], int n)
// both are same
int Get_Sum(int *arr, int n)
{
     cout << "sizeof arr :" << sizeof(arr) << endl; // It displays size of a pointer
     int sum = 0;
     for (int i = 0; i < n; i++)
     {
          sum += arr[i];
          // sum += i[arr];
          // Both are same
     }
     return sum;
}

void UpdateValue(int **ptr)
{
     // No change outside the function
     //  ptr = ptr + 1;

     // Some changes outside the function
     //  *ptr = *ptr + 1;

     // Change the value of i for all the program
     // **ptr = **ptr + 1;
}
void update(int *p)
{
     *p = (*p) * 2;
}
void increment(int **p)
{
     ++(**p);
}
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
     /*
          // CHRACTER ARRAY
          char ch[6] = "parag";
          cout << "ch :" << ch << endl; // Print the entire character array

          char *p = &ch[0];
          cout << "p :" << p << endl; // Print the entire string

          char temp = 'x';
          char *t = &temp;
          cout << "t :" << t << endl;//It print first x and it goes to the next address and print untill it get null character


     */
     /*
          // POINTER WITH FUNCTIONS

          // Print value and address of a variable using funtion pointer
          int t = 5;
          int *p = &t;
          Print(p);

          // Updation value and address
          cout << "Befor p:" << p << endl;
          cout << "Befor *p:" << *p << endl;
          Update(p);
          cout << "Befor p:" << p << endl;
          cout << "Befor *p:" << *p << endl;

          // Get sum of an array
          int a[5] = {11, 22, 33, 44, 56};
          // cout << "Get sum: " << Get_Sum (a,5)<< endl;

          // Benifit:We can send a part of array to the functions
          cout << "Get sum:( a+3 i.e last two element)  :" << Get_Sum(a + 3, 2) << endl;

     */

     // DUBLE POINTER
     /*
          int i = 5;
          int *ptr = &i;
          int **dptr = &ptr;

          cout << "i :" << i << endl;
          cout << "*ptr :" << *ptr << endl;
          cout << "**dptr :" << **dptr << endl;
          // Above all the cout function print value of i ,means 5

          cout << "&i :" << &i << endl;
          cout << "ptr :" << ptr << endl;
          cout << "*dptr :" << *dptr << endl;
          // Above all the cout function print address of i

          cout << "&ptr :" << &ptr << endl;
          cout << "dptr :" << dptr << endl;
          // Above all the cout function print address of ptr pointer
     */

     /*
          // UPDATION USING FUNCTION
          int i = 5;
          int *ptr = &i;
          int **dptr = &ptr;
          cout << "Befor i :" << i << endl;
          cout << "Befor ptr :" << ptr << endl;
          cout << "Befor dptr :" << dptr << endl;
          UpdateValue(dptr);
          cout << "After i :" << i << endl;
          cout << "After ptr :" << ptr << endl;
          cout << "After dptr :" << dptr << endl;
     */

     //    MCQ
     /*
          // PROBLEM->1:
          int first = 8;
          int *p = &first;
          cout << "(*p)++ :" << (*p)++ << endl;
          cout << "first :" << first << endl;
          // OUTPUT:-> 8 ,9
     */
     /*
          // PROBLEM->2:
          int *p = 0;
          int first = 110;
          *p = first;
          cout << "*p :" << *p << endl;
          // OUTPUT:-> sagmentation falt
     */
     /*
          // PROBLEM->3:
          int first = 8;
          int second = 18;
          int *ptr = &second;
          *ptr = 9;
          cout << "first:" << first << endl;
          cout << "second:" << second << endl;
          // OUTPUT:-> 8, 9
     */
     /*
          // PROBLEM->4:
          int first = 6;
          int *p = &first;
          int *q = p;
          (*q)++;
          cout << "first:" << first << endl;
          // OUTPUT:-> 7
     */
     /*
          // PROBLEM->5:
          int first = 8;
          int second = 11;
          int *third = &second;
          first = *third;
          *third = *third + 2;
          cout << "first:" << first << endl;
          cout << "second:" << second << endl;
          // OUTPUT:-> 11,13
     */
     /*
          // PROBLEM->6:
          float f = 12.5;
          float p = 21.5;
          float *ptr = &f;
          (*ptr)++;
          *ptr = p;
          cout << "*ptr:" << *ptr << endl;
          cout << "f:" << f << endl;
          cout << "p:" << p << endl;
          // OUTPUT:-> 21.5 , 21.5, 21.5
     */
     /*
           // PROBLEM->7:
          int arr[5];
          int *ptr = 0;
          cout << "sizeof(arr):" << sizeof(arr) << endl;
          cout << "sizeof(ptr):" << sizeof(ptr) << endl;
          // OUTPUT:-> 20 , sizeof a pointer
     */
     /*
          // PROBLEM->8:
          int arr[5] = {11, 21, 13, 14};
          cout << "*(arr):" << *(arr) << endl;
          cout << "*(arr+1):" << *(arr + 1) << endl;
          // OUTPUT:-> 11,21
     */
     /*
          // PROBLEM->9:
          int arr[6] = {11, 12, 31};
          cout << "arr:" << arr << endl;
          cout << "&arr:" << &arr << endl;
          // OUTPUT:-> print address of the first element of the array
     */
     /*
          // PROBLEM->10:
          int arr[6] = {11, 21, 31};
          int *ptr = arr;
          cout << "ptr[2]: " << ptr[2] << endl;
          // OUTPUT:-> 31
     */
     /*
          // PROBLEM->11:
          int arr[6] = {11, 12, 13, 14, 15};
          cout << "*(arr): " << *(arr) << endl;
          cout << "*(arr+3): " << *(arr+3) << endl;
          // OUTPUT:-> 11,14
     */
     /*
          // PROBLEM->12:
          int arr[6] = {11,21,31,41};
          int *ptr=arr++;
          cout << "*ptr: " << *ptr << endl;
          // OUTPUT:-> Gives an error because we can't upgrade array
     */
     /*
          // PROBLEM->13:
          char ch = 'a';
          char *ptr = &ch;
          ch++;
          cout << "*ptr: " << *ptr << endl;
          // OUTPUT:-> b
     */
     /*
          // PROBLEM->14:
          char arr[]="abcde";
          char *p=&arr[0];
          cout << "p: " << p << endl;
          // OUTPUT:-> abcde
     */
     /*
          // PROBLEM->15:
          char arr[] = "abcde";
          char *p = &arr[0];
          p++;
          cout << "p: " << p << endl;
          // OUTPUT:-> bcde
     */
     /*
          // PROBLEM->16:
          char str[] = "babbor";
          char *p = str;
          cout << "str[0]: " << str[0] << endl;
          cout << "p[0]: " << p[0] << endl;
          // OUTPUT:-> b, b
     */
     /*
          // PROBLEM->17:
          int i = 10;
          update(&i);
          cout << "i: " << i << endl;
          // OUTPUT:-> 20
     */
     /*
          // PROBLEM->18:
          int i = 10;
          update(&i);
          cout << "i: " << i << endl;
          // OUTPUT:-> 20
     */
     /*
          // PROBLEM->19:
          int first = 110;
          int *p = &first;
          int **q = &p;
          int second = (**q)++ + 9;
          cout << "first: " << first << endl;
          cout << "second: " << second << endl;
          // OUTPUT:-> 111,109
     */
     /*
          // PROBLEM->20:
          int first = 100;
          int *p = &first;
          int **q = &p;
          int second = ++(**q);
          int *r=*q;
          cout << "first: " << first << endl;
          cout << "second: " << second << endl;
          // OUTPUT:-> 101,101
     */
     /*
          // PROBLEM->20:
          int num = 100;
          int *ptr = &num;
          increment(&ptr);
          cout << "num: " << num << endl;
          // OUTPUT:-> 101
     */
     return 0;
}