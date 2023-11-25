// Macros :-> A piece of code in a program that is replaced by value of macro
// Inline function:->It used to reduce function call overhead
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Macros define
#define PI 3.14

// GLOBAL VARIABLE DECLEARATION(Its not good practice)
int scope = 10;

// Inline function
inline int Getmax(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    // MACROS
    /*
    int r = 5;
    double area = 3.14 * r * r;
    cout << "Area : " << area << endl;
    */
    /*
   //We can also ue this but it takes memory space
    int r = 5;
    double pi=3.14;
    double area = pi * r * r;
    cout << "Area : " << area << endl;
    */
    /*
   //Using macros
    int r = 5;
    double area = PI * r * r;
    cout << "Area : " << area << endl;
    */

    // GLOBAL VARIABLE
    /*
        cout << "scope :" << scope << endl;
    */

    // INLINE FUNCTION
    /*
    int a = 1;
    int b = 2;
    int ans = 0;
    ans = Getmax(a, b);
    cout << "Ans :" << ans << endl;
    a = a + 3;
    b += 1;
    ans = Getmax(a, b);
    cout << "Ans :" << ans << endl;
    */
    return 0;
}