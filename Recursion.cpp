// Recursion :->When a function call itself its called recursive relation.
// Tail recursive::->>at the last recursive relation
//  Head recursive::->>After base condition recursive relation

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Head recursive example
int Factorial(int n)
{
    // base condition
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // recursive relation
    int ans = n * Factorial(n - 1);
    return ans;
}

// Head recursive example
int Power(int n)
{
    // base condition
    if (n == 0)
    {
        return 1;
    }
    // recursive relation
    int ans = 2 * Power(n - 1);
    return ans;
}

// Tail recursive example
void Print_Count(int n)
{
    // base condition
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    // recursive relation
    Print_Count(n - 1);
}
// Head recursive example
void Print_Count_Head(int n)
{
    // base condition
    if (n == 0)
    {
        return;
    }
    // recursive relation
    Print_Count_Head(n - 1);
    cout << n << " ";
}

int main()
{
    /*
        int n;
        cin >> n;
        cout << "Factorial of " << n << " :" << Factorial(n) << endl;
    */
    /*
        int n;
        cin >> n;
        cout << "Power of " << n << " :" << Power(n) << endl;
    */
    /*
        int n;
        cin >> n;
        Print_Count(n);
        cout<<endl;
        Print_Count_Head(n);
    */

    return 0;
}