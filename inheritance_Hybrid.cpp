// Hybrid inheritance: Combination of more than one type of inheritance

#include <iostream>
#include <string>
#include <vector>
using namespace std;



class A
{
public:
    void A_function()
    {
        cout << "Inside the A function" << endl;
    }
};

class B : public A
{
public:
    void B_function()
    {
        cout << "Inside the B function" << endl;
    }
};

class Hybrid
{
public:
    void Hybrid_function()
    {
        cout << "Hybrid class function running !" << endl;
    }
};

class C : public A, public Hybrid
{
public:
    void Derived_Function()
    {
        cout << "Inside the C function" << endl;
    }
};


int main()
{
    B obj1;
    cout << "B class object are running" << endl;
    obj1.A_function();
    obj1.B_function();

    C obj;
    cout << "C class object are running" << endl;
    obj.A_function();
    obj.Derived_Function();
    return 0;
}