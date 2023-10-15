// SELECTION SORT

/*

let arr[]= {3,2,7,6,5}

            arr = | 3 | 2 | 7 | 6 | 5 |   i=0,j=1

Round:1->   arr = | 2 | 3 | 7 | 6 | 5 |   after complete round i=1 and j starts from 2

Round:2->   arr = | 2 | 3 | 7 | 6 | 5 |   after complete round i=2 and j starts from 3

Round:3->   arr = | 2 | 3 | 5 | 6 | 7 |   after complete round i=3 and j starts from 4

Round:4->   arr = | 2 | 3 | 5 | 6 | 7 |   after complete round i=4 and j starts from 5
                                           {when j eqal to size of the array at that time exit from the loop}


// TIME COMPLEXITY= O(n^2)
// SPACE COMPLEXITY= O(1)

*/

#include <iostream>
using namespace std;

// display array
void Display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
}

// Best case and Worst case same

void Selection_short(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// If array is already shorted  then if i use below method then best case is reduced

void Selection_sort_shorted_arr(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                k = 1;
            }
        }
        if (k == 0)
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {14, 5, 73, 2, 4, 7};
    int arr1[] = {1, 5, 7, 22, 24, 27};

    cout << "Befor selection sort apply to the array ....... " << endl;
    Display_array(arr, 6); // Display array
    Selection_short(arr, 6);
    cout << endl << "****************    ****************" << endl;
    cout << "After selection sort apply to the array ....... " << endl;
    Display_array(arr, 6); // Display array

    cout << endl<< endl<< "****************    ****************" << endl<< endl<< endl<< endl;
    cout << "Befor selection sort apply to the array1 ....... " << endl
         << endl;
    Selection_sort_shorted_arr(arr1, 6);
    cout << endl<< endl<< "****************    ****************" << endl;
    cout << "After selection sort apply to the array ....... " << endl
         << endl;
    Display_array(arr1, 6); // Display array1

    return 0;
}
