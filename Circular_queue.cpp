#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    CircularQueue(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack,
    // and false otherwise.
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) ||
            (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty,
    // otherwise returns the popped element.
    int dequeue()
    {
        if (front == -1)
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

    bool isFull()
    {
        /*
        if((front==0 && rear==size-1) || ( front!=0 && rear == (front-1)%(size-1)) ){
            return true;
        }
        else {
            return false;
        }
        */

       //above condition gives error because sometime front goes to zero and if size is 1 the it will goes to zero so below conditions are use for checking isfull conditions 
        if (front == 0 && rear == size - 1)
        {
            return true;
        }
        else if (front != 0 && rear == (front - 1 + size) % size)
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
    // Run on code studio enviroment
    return 0;
}