// Multiple inheritance: Derived a class from more than one base class
// syntax: class <<Derived-class-name>> : <<Access-modifire>> <<Base-class-1-name>>,<<Access-modifire>> <<Base-class-1-name>>{//Derived class  body}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Base_one
{
public:
    void Base_one_Function()
    {
        cout << "Inside the Base class 1 function" << endl;
    }
};

class Base_two
{
public:
    void Base_two_Function()
    {
        cout << "Inside the Base class 2 function" << endl;
    }
};

class Derived : public Base_one, public Base_two
{
public:
    void Derived_Function()
    {
        cout << "Inside the Derived class function" << endl;
    }
};

int main()
{
    Derived obj;
    obj.Base_one_Function();
    obj.Base_two_Function();
    obj.Derived_Function();
    return 0;
}