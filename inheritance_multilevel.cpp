// Multilevel inheritance: Derived a class from already derived  class
// syntax: class <<Derived-class-name>> : <<Access-modifire>> <<Base-class-1-name>>,<<Access-modifire>> <<Base-class-1-name>>{//Derived class  body}

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

class B:public A
{
public:
    void B_function()
    {
        cout << "Inside the B function" << endl;
    }
};

class C : public B
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
    obj.A_function();
    obj.B_function();
    obj.Derived_Function();
    return 0;
}