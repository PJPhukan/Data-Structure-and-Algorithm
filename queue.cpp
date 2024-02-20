#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

// Queue implement without using STl
class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    // Check full or not
    bool isFull()
    {
        return size == rear;
    }
    bool isEmpty()
    {
        return front == rear;
    }
    void enqueue(int data)
    {
        if (rear != size)
        {
            arr[rear++] = data;
        }
        else
        {
            cout << "Queue is full !" << endl;
        }
    }
    int dequeue()
    {
        if (front != rear)
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int Front()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    /*
    //Impletement using STL
    queue<int> q;
    q.push(23);
    q.push(2);
    q.push(4);
    q.pop();
    cout<<"Front of the queue is :"<<q.front()<<endl;
    cout << "Size of the queue is :" << q.size() << endl;
    cout<<"Is queue is empty or not :"<<q.empty()<<endl;
    */

    //    /Without using STL
    Queue q(10);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    cout << "Front element of the queue is :" << q.Front() << endl;
    return 0;
}