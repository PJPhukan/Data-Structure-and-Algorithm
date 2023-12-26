//Single inheritance: Derived a from one base class
//syntax: class <<Derived-class-name>> : <<Access-modifire>> <<Base-class-name>>

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base{
    public:
        void Base_Function(){
            cout<<"Inside the Base class function"<<endl;
        }
};
class Derived:public Base{
    public:
        void Derived_Function(){
            cout<<"Inside the Derived class function"<<endl;
        }
};

int main(){
    Derived obj;
    obj.Base_Function();
    obj.Derived_Function();
    return 0;
}