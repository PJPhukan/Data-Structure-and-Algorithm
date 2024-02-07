// All about stack

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>
using namespace std;

// Implementation of stack
class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }
    bool IsFull()
    {
        return size - top > 1;
    }

    void PushData(int data)
    {
        if (!this->IsFull())
            cout << "Stack is full !" << endl;
        else
        {
            top++;
            arr[top] = data;
        }
    }
    bool IsEmpty()
    {
        return top == -1;
    }
    void PopData()
    {
        if (!this->IsEmpty())
        {
            top--;
        }
        else
            cout << "Stack is empty!" << endl;
    }
    int TopElement()
    {
        if (!this->IsEmpty())
            return arr[top];
        else
            cout << "Stack is empty !" << endl;
    }
    void Display()
    {
        int i = top;
        while (i >= 0)
        {
            cout << arr[i] << endl;
            i--;
        }
    }
};

int main()
{

    /*
    // Using stl STACK
    stack<int> s;
    // push element in the stack
    s.push(3);
    s.push(4);

    // Display top of the stack
    cout << "Top of the stack is :" << s.top() << endl;

    // Pop top element of the stack
    s.pop();

    // check stack is empty or not
    if (s.empty())
        cout << "Stack is empty !" << endl;
    else
        cout << "Stack is not empty !" << endl;
    */

    // Stack implementing

    Stack s(3);
    s.PushData(12);
    s.PushData(13);
    s.PushData(45);
    s.PushData(47);
    s.Display();
    s.PopData();
    cout << "After pop top element !" << endl;
    s.Display();
    cout << "Top of the element is :" << s.TopElement() << endl;
    return 0;
}