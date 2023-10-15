// INSERTION SORT
/*

let arr[]={ 3,2,7,6,5}


         arr = | 3 | 2 | 7 | 6 | 5 |   i=1,j=0 {i starts from 1 beacause first element already sorted }
Round:1->arr = | 2 | 3 | 7 | 6 | 5 |    after complete round i=2 and j starts from 1
Round:2->arr = | 2 | 3 | 7 | 6 | 5 |    after complete round i=3 and j starts from 2
Round:3->arr = | 2 | 3 | 6 | 7 | 5 |    after complete round i=4 and j starts from 3
Round:4->arr = | 2 | 3 | 6 | 5 | 7 |    after complete round i=4 and j starts from 4
         arr = | 2 | 3 | 5 | 6 | 5 |

TIME COMPLEXITY =O(n^2)
SPACE COMPLEXITY =O(1)
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



// Insertion sort main code

void Insertion_sort(int arr[], int n)
{
    int j;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {14, 5, 73, 2, 4, 7};
    cout << "Befor insertion sort apply to the array ....... " << endl;
    Display_array(arr, 6); // Display array
    Insertion_sort(arr, 6);
    cout << endl
         << "****************    ****************" << endl;
    cout << "After insertion sort apply to the array ....... " << endl;
    Display_array(arr, 6); // Display array
    return 0;
}