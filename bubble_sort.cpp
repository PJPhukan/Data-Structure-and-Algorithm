// BUBBLE SORT

/*

let arr[]= {3,2,7,6,5}

Round:1->   | 3 | 2 | 7 | 6 | 5 |     --->> arr[0] > arr[1] so swap it
            | 2 | 3 | 7 | 6 | 5 |     --->> arr[1] < arr[2] so no swap
            | 2 | 3 | 6 | 7 | 5 |     --->> arr[2] < arr[3] so swap it
            | 2 | 3 | 6 | 5 | 7 |     --->> arr[3] < arr[4] so swap it
                                      --->> after first round complete 7 is sorted
    now arr[]=| 2 | 3 | 6 | 5 |



Round:2->   | 2 | 3 | 6 | 5 |     --->> arr[0] < arr[1] so no swap
            | 2 | 3 | 6 | 5 |     --->> arr[1] < arr[2] so no swap
            | 2 | 3 | 5 | 6 |    --->> arr[2] > arr[3] so swap it
                                      --->> after second round complete 6 is sorted
    now arr[]=| 2 | 3 | 5 |


Round:3->   | 2 | 3 | 5 |     --->> arr[0] < arr[1] so no swap
            | 2 | 3 | 5 |     --->> arr[1] < arr[2] so no swap
                                      --->> after third round complete 5 is sorted
    now arr[]=| 2 | 3 |


Round:3->   | 2 | 3 |     --->> arr[0] < arr[1] so no swap
                                    --->> after third round complete 3 is sorted
    now arr[]=| 2 |

Last element is already sorted so no neen to check it . It means that if then size of the array is n then number of round is n-1


TIME COMPLEXITY : O(N^2)
SPACE COMPLEXITY : O(1)
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

// Buble sort main code( Best case and Worst case same )

void Bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Buble sort main code(Adaptable) {If the array is already sorted then its works ,best case complexity is O(n) in this case}

void Bubble_sort_adaptable(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int apd = 1;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                apd = 0;
            }
            // cout << ++k << endl;
        }
        if (apd == 1)
        {
           break;
        }
    }
}

int main()
{
    /*
    int arr[] = {14, 5, 73, 2, 4, 7};

    cout << "Befor selection sort apply to the array ....... " << endl;
    Display_array(arr, 6); // Display array


    Bubble_sort(arr, 6); //Call the buble sort

    cout << endl<< "****************    ****************" << endl;
    cout << "After selection sort apply to the array ....... " << endl;
    Display_array(arr, 6); // Display array

*/
    // For adaptable
    int arr1[] = {1, 5, 7, 22, 24, 27};

    cout << "Befor selection sort apply to the array ....... " << endl;
    Display_array(arr1, 6); // Display array

    Bubble_sort_adaptable(arr1, 6); // Call the buble sort

    cout << endl
         << "****************    ****************" << endl;
    cout << "After selection sort apply to the array ....... " << endl;
    Display_array(arr1, 6); // Display array

    return 0;
}