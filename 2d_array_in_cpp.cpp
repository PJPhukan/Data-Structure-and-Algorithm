// 2-Dimentional Array all about

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Print 2d array elements-->>Function
void Print_2d_Array(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}
// Input 2d array elements-->>Function
void Input_2d_Array(int arr[][2], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter "
                 << "arr[" << i << "][" << j << "]  position element :";
            cin >> arr[i][j]; // Input 2d array element from the user
        }
    }
}

// SEARCH A TERGET ELEMENT
bool isPresent(int arr[][2], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// ROW WISE SUM
void Row_Wise_Sum(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << (i + 1) << "th row sum :" << sum << endl;
    }
}
// COLUMN WISE SUM
void Col_Wise_Sum(int arr[][2], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << (i + 1) << "th col sum :" << sum << endl;
    }
}

// LARGEST ROW SUM
void Largest_Row_Sum(int arr[][2], int row, int col)
{
    int largest = 0, largestIndex;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << (i + 1) << "th row sum :" << sum << endl;
        if (largest < sum)
        {
            largest = sum;
            largestIndex = i;
        }
    }
    cout << "Largest row sum : " << largest << "  And row number : " << largestIndex + 1 << endl;
}
int main()
{
    int arr[3][2];                             // Initialize the 2d array with 3 row and 2 column
    int arr1[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // Initialize with value

    /*
        //Input 2d array elements
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<"Enter "<<"arr["<<i<<"]["<<j<<"]  position element :";
                cin>>arr[i][j];//Input 2d array element from the user
            }

        }
        */
    /*
        //Print 2d array elements
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<arr[i][j]<<'\t';
            }
            cout<<endl;

        }
    */

    // Input_2d_Array(arr, 3, 2);
    // Print_2d_Array(arr, 3, 2);
    Print_2d_Array(arr1, 3, 2);

    /*
        // search a target element
        cout << "Enter your target ";
        int target;
        cin >> target;
        if (isPresent(arr1, target, 3, 2))
        {
            cout << "Taget Found !" << endl;
        }
        else
        {
            cout << "Taget Not Found !" << endl;
        }
    */
    /*
        // row wise sum
        Row_Wise_Sum(arr1, 3, 2);

    */
    /*
        // col wise sum
        Col_Wise_Sum(arr1, 3, 2);

     */

    /**/
    Largest_Row_Sum(arr1, 3, 2);
    /**/
    return 0;
}