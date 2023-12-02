// QUICKSORT
// Quicksort:- ->(i) Partition  -> take a pivote
//                              -> Count all element <pivote
//                              -> pivoteIndex=startIndex+countIndex
//                              -> |elements<|pivote|<elements|
//                              ->swap elements
//             ->(ii) Recusion call quicksort

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Partition(int *arr, int start, int end)
{
    // take start index element as pivot element
    int pivot = arr[start];

    // initialize ctn for count pivot>arr[element]
    int ctn = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            // count pivote>arr[i]
            ctn++;
        }
    }
    int pivotIndex = start + ctn;
    // pivote element shift to right palce on the basis of pivotIndex
    swap(arr[pivotIndex], arr[start]);
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }
    return pivotIndex;
}

void Quick_sort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // Partition
    int p = Partition(arr, start, end);

    // Recursion
    // for left side sorting
    Quick_sort(arr, start, p - 1);

    // for right side sorting
    Quick_sort(arr, p + 1, end);
}

void Print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {72, 31, 8, 6, 11, 0};
    Quick_sort(arr, 0, 5);
    Print_array(arr, 6);
    return 0;
}