// Hierachical inheritance: Derived more than one from one Base class
// syntax: class <<Derived-class-name>> : <<Access-modifire>> <<Base-class-name>>,{//Derived class  body}

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

class C : public A
{
public:
    void Derived_Function()
    {
        cout << "Inside the C function" << endl;
    }
};

int main()
{
    C obj;
    cout<<"C derived class functions running !"<<endl;
    obj.A_function();
    obj.Derived_Function();
    B obj1;
    cout << "B derived class functions running !" << endl;
    obj1.A_function();
    obj1.B_function();
    return 0;
}