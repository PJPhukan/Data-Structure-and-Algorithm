#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;

// Max heap implementation using array
class Heap
{
public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
        }

        // step 1: swap first node with the last or assign first node value by last node value
        arr[1] = arr[size];

        // step 2: remove last node from the heap
        size--;

        // step 3: take root node to its correct postion
        int i = 1;
        while (i <= size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[leftIndex], arr[i]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[rightIndex], arr[i]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if (left <= size && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= size && arr[largest] < arr[right])
    {

        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest); // recursive call for heapify the largest index below nodes
    }
    else
    {
        return;
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        // step:1 - swap first node with the last node
        swap(arr[1], arr[size]);

        // step:2 - decrement the array size(i.e: ignore the last element because the last index elements are sorted )
        size--;

        // step:3 -take root node to its correct position using heapify
        heapify(arr, size, 1);
    }
}

void Display(int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    /*
        // Heap h;
        // h.insert(60);
        // h.insert(50);
        // h.insert(40);
        // h.insert(30);
        // h.insert(20);
        // h.insert(55);

        // h.print(); // Printing the heap

        // h.Delete();
        // h.print();

        // heapify
        int arr[6] = {-1, 54, 55, 53, 52, 50};
        int n = 5;
        // for (int i = n / 2; i > 0; i--)
        // {
        //     heapify(arr, n, i);
        // }
        cout << "Before sorting the array :";
        Display(arr, n);

        // heapsort
        heapSort(arr, n);
        cout << "After sorting the using heapsort :";
        Display(arr, n);

        */

    // Priority Queue

    // max heap
    priority_queue<int> pq; // creating a heap using stl
    pq.push(50);            // push data into the max heap
    pq.push(30);
    pq.push(90);
    pq.push(100);

    cout << "Root node of the heap :" << pq.top() << endl; // return the top node value of the heap ,i.e. maximum value of the heap

    pq.pop(); // remove or delete top node of the heap
    cout << "Root node of the heap after deletion :" << pq.top() << endl;

    cout << "size of the heap is :" << pq.size() << endl; // size of the heap

    if (pq.empty())
    { // heap is empty or not
        cout << "Yes , pq is empty" << endl;
    }
    else
    {
        cout << "Noo , pq is not empty" << endl;
    }




    //min heap
    priority_queue<int, vector<int>, greater<int>> minpq; // creating a min heap using stl
        minpq.push(50);            // push data into the min heap
        minpq.push(30);
        minpq.push(90);
        minpq.push(100);

        
    cout << "Root node of the heap :" << minpq.top() << endl; // return the top node value of the heap ,i.e. maximum value of the heap

    minpq.pop(); // remove or delete top node of the heap
    cout << "Root node of the heap after deletion :" << minpq.top() << endl;

    return 0;
}