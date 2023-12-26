// Polymorphism: Existing in multiple forms
// types of polymorphism: (i)Compile time polymorphism
//                        (ii) Run time polymorphism
//(i)Compile time polymorphism: types: (a) Function Overloading,
//                                      (b) Operator Overloading
//(ii)Run time polymorphism: types: (a)Method Overiding
// Rules of method Overiding is :
//  --> The method of the parent class and the method of the child class must have the same name.
//  --> The method of the parent class and the method of the child class must hace the same parameters.
//  --> It is possitive through inheritance only.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//(a) Function Overloading
class Fn_over
{
public:
    void Speak()
    {
        cout << "Speaking !" << endl;
    }

    void Speak(int Op_over)
    {
        cout << "Bearking !" << endl;
    }
};

// (b) Operator Overloading
// syntax: <<return-type>> operator <<operator>> (){//function body}
class Op_over
{
public:
    int a;
    void operator+(Op_over &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output :" << value1 - value2 << endl;
    }
};

// (a)Method Overiding(over write a function)
class Animal
{
public:
    void Speak()
    {
        cout << "Animal Speaking !" << endl;
    }
};
class Dog : public Animal
{
public:
    void Speak()
    {
        cout << "Dog berking !" << endl;
    }
};

int main()
{
    // Function Overloading
    Fn_over a;
    a.Speak(12);
    a.Speak();

    // Operator Overloading
    Op_over obj1, obj2;
    obj1.a = 12;
    obj2.a = 2;
    obj1 + obj2;

    // Method Overiding
    Dog d;
    d.Speak();
    return 0;
}