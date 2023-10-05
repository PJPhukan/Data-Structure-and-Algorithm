#include <iostream>
using namespace std;

int Binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    // mid = (start + end) / 2; // Sometimes its through error... because ,mid value can goes to out of integer range .
    
    
    mid = start + (end - start)/2;


    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return 1;
        }
        else
        {
            if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        // mid = (start + end) / 2;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int arr[]={0,3,5,7,9,11,15};
    if (Binary_search(arr,7,11))
    {
        cout<<"Item found !";
    }
    else{
        cout<<"Item not found !";

    }
    

    return 0;
}


// time complexity = O(log n)