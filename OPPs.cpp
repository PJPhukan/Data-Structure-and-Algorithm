#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Create a class with name Hero
class Hero
{
private:
    char ch;
    int data;

public:
    int roll_no;

    // default constructor
    Hero()
    {
        cout << "Default constructor called" << endl;
    }

    // Perametarise constructor
    Hero(int data, char ch, int roll)
    {
        this->data = data;
        this->ch = ch;
        this->roll_no = roll;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        this->ch = temp.ch;
        this->data = temp.data;
        this->roll_no = temp.roll_no;
    }

    void display()
    {
        cout << "Private: " << endl;
        cout << "     Value of ch :" << ch << endl;
        cout << "     Value of data :" << data << endl;
        cout << "Public: " << endl;
        cout << "     Value of roll_no :" << roll_no << endl;
    }

    // DESTRUCTOR
    ~Hero()
    {
        cout << "Destructor called " << endl;
    }

    // STATIC DATA MEMBER
    static int college;

    // STATIC MEMBER FUNCTION(it can access only static data members and functions)
    static void Sdisplay()
    {
        cout << "The value of college is :" << college << endl;
    }
};

// ENCAPTULATION
class Encaptulation
{
private:
    int data;
    int date;
};

// INHERITANCE
// syntax: class <<Derived-class-name>>:<<access-specifire>> <<Base-class-name>>{//derived class body};
//--->>>>Base class or super class or perent class
class Base{
    private:
        int private1;
        int private2;

    public:
        int public1=12;
        int public2=13;
    protected:
        int protected1=14;
        int protected2=15;
};
//--->>> Derived class or  child class 
class Derived:public Base{
    public:
        void display(){
            cout<<"Value of Public1 :"<<public1<<endl;
            cout<<"Value of Public2 :"<<public2<<endl;
            cout << "Value of protected1 :" << protected1 << endl;
            cout << "Value of protected2 :" << protected2 << endl;
        }
};


// Asigned the value of the static data member outside the class (:: is called scope resolution operator )
int Hero ::college = 123;

int main()
{

    /*
    //CREATION OF OBJECT
    // create a object of class Hero(statically)
    Hero pj;
    pj.roll_no = 10;//set value
    cout << "Roll no (statically) :" << pj.roll_no << endl;

    //Create a object of class Hero (dynamically)
    Hero *phukan=new Hero;
    phukan->roll_no=34;
    cout<<"Roll no (dynamically) :"<<phukan->roll_no<<endl;
    */

    /*
    //SIZE OF A CLASS (IF THERE IS NO DATA TYPES AVILABLE AT THAT TIME IT'S TAKE 1 BYTE)
    cout<<"Hero class size is :"<<sizeof(Hero)<<endl;
    */

    /*
    // CONSTRUCTOR(SAME AS THE CLASS NAME)
    // Default constructor
    cout<<"Default constructor called"<<endl;
    Hero h;

    // Perametarise constructor
    cout<<"Perametarise constructor called"<<endl;
    Hero h1(4 , 'A',12);
    // h1.roll_no=12;
    h1.display();

    //Copy constructor
    cout<<"Copy constructor called"<<endl;
    Hero h2(h1);
    h2.display();
    */

    /*
    // DESTRUCTOR(SAME AS THE CLASS NAME WE INITIALISE WITH TIELD(~) )
    Hero dc;
    // Hero dc1;
    Hero *dcp = new Hero;
    delete dcp;//No destructor called for dynamically created object .So we manually do it .
    */

    /*
    // STATIC DATA MEMBERS AND FUCNTIONS (IT CAN ACCESS WITHOUT CREATING OBJECT AND IT'S INITIALISE WITH 'STATIC' KEYWORD)
    // data member access without creating object
    // cout << "College " << Hero::college << endl;

    //  member function access without creating object
    Hero::Sdisplay();
    */

    /*
    //ENCAPTULATION(wrapping up Data member functions .WHY :->>>> Information hiding/data hiding,Increase security,Read only(if we want ),Code reusebility Unit testing)
     Encaptulation e;
     // cout<<e.data<<endl;// we can't access any data member because of all data members are private means data hiding form outside the class (It's called Encaptulation)
    */

    // INHERITANCE (RE-USE EXITSTING CLASS MEMBER AND FUNCTION OTHER CLASS )
    // Base class Access modifire----------Public-----------Protected-----------Private
    //       Public                        Public            Protected          Private
    //       Protected                   Protected         Protected             Private
    //       Private                  Not accessable     Not accessable       Not accessable
    Derived d;
    d.display();
    //Tyepes of inheritance
    //(i) Single inheritance
    //(ii) multiple inheritance
    //(iii) multilevel inheritance
    //(iv) hybrid inheritance
    //(v) hierachical inheritance
    return 0;
}