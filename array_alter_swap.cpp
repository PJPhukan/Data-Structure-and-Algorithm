#include <iostream>
using namespace std;

void Array_alter_swap(int arr[], int size)
{
 for (int i = 0,j=i+1; i < size && j< size; i=i+2,j=j+2)
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
        // cout << arr[i] << endl;
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 3, 2, 12, 24};
    cout << "Before reverse array element!  " << endl;
    Array(arr, 5);
    Array_alter_swap(arr, 5);
    cout << "After reverse array element!  " << endl;
    Array(arr, 5);
    return 0;

    return 0;
}