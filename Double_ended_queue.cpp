#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

// Without using stl
class Deque
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // check queue is full or not
        if (isFull())
        {
            return false;
        }
        // if queue is the first element (means this data willl be the first element)
        else if (isEmpty())
        {
            front = rear = 0;
        }

        // if front==0 and last index != rear then front update to last index of the queue
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        // normal case
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // check queue is full or not
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if (isEmpty())
        {
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // check queue is empty or not
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // check queue is empty or not
        if (isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // check queue is empty or not
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    // Using stl
    deque<int> d;
    d.push_front(12);
    d.push_front(13);
    d.push_back(15);
    d.push_back(16);
    cout << " d.front() : " << d.front() << endl;
    cout << "d.back() : " << d.back() << endl;
    d.pop_back();
    d.pop_front();
    cout << "After popped pop_back and pop_front :" << endl;
    cout << " d.front() : " << d.front() << endl;
    cout << "d.back() : " << d.back() << endl;

    if (d.empty())
    {
        cout << "DQueue is Empty !" << endl;
    }
    else
    {
        cout << "DQueue is not empty !" << endl;
    }
    return 0;
}