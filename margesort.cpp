// MARGESORT ALGORITHM
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    // to first array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // to second array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // marge first and second array
    int Findex = 0;
    int Sindex = 0;
    mainArrayIndex = s;
    while (Findex < len1 && Sindex < len2)
    {
        if (first[Findex] < second[Sindex])
        {
            arr[mainArrayIndex] = first[Findex];
            mainArrayIndex++;
            Findex++;
        }
        else
        {
            arr[mainArrayIndex] = second[Sindex];
            mainArrayIndex++;
            Sindex++;
        }
    }
    while (Findex < len1)
    {
        arr[mainArrayIndex] = first[Findex];
        mainArrayIndex++;
        Findex++;
    }
    while (Sindex < len2)
    {
        arr[mainArrayIndex] = second[Sindex];
        mainArrayIndex++;
        Sindex++;
    }
    delete[] first;
    delete[] second;
}

void Mergesort(int *arr, int s, int e)
{

    // Base case
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // left part sorting
    Mergesort(arr, s, mid);

    // Right part sorting
    Mergesort(arr, mid + 1, e);

    // marge
    Merge(arr, s, e);
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
    Mergesort(arr, 0, 5);
    Print_array(arr, 6);

    return 0;
}