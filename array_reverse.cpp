#include <iostream>
using namespace std;

void Array_reverse(int arr[], int size)
{
    for (int i = 0, j = size-1; i<size / 2, j>= size / 2; i++, j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 2, 12, 24, 554, 54, 45, 78};
    cout<<"Before reverse array element!  "<<endl;
    Array(arr,9);
    Array_reverse(arr,9);
    cout<<"After reverse array element!  "<<endl;
    Array(arr,9);
     return 0;
}