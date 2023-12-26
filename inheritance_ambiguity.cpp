//Inheritance Ambiguity 

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base_one{
    public:
    void ABC(){
        cout <<"Inside the Base one class !"<<endl;
    }
};
class Base_two{
public:
    void ABC()
    {
        cout << "Inside the Base two class !" << endl;
    }
};
class Derived:public Base_one,public Base_two{
    public:
        void ABC()
        {
            cout << "Inside the Derived class !" << endl;
        }
};

int main(){
    Derived d;
    d.Base_one::ABC();
    d.Base_two::ABC();
    d.ABC();
    return 0;
}