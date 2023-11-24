// Reference variable:-> Same memory location but different name
// Heap:->Allocate memory dynamically in the heap.We use for request dynamically allocate memory in the heap using 'new' keyword and delete dynamically allocate memory using 'delete' keyword

#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
// Below funtion is a pass by value funtion
void update(int n)
{
    n++;
}
*/

/*
// Below funtion is a pass by reference funtion
void update_reference(int &n)
{
    n++;
}
*/

/*
// Return type reference variable
int &Return_ref(int n)
{
    int a = n + 10;
    return a;
}
*/

/*
// Get total sum
int Get_Sum(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}
*/

int main()
{
    /*
        // Below example : address of i and address of j both are same but different name
        int i = 5;
        int &j = i;
        cout << "i :" << i << endl;
        cout << "j :" << j << endl;
        // Above print statement print same means value of i;

        i++;
        j++;
        // Above both are increment the value of i

    */
    /*
        int n = 5;
        cout << "Befor function call value of n :" << n << endl;
        update(n);
        //No change after funtion call
        cout << "After function call value of n :" << n << endl;
    */
    /*
        int n = 8;
        cout << "Befor function call value of n :" << n << endl;
        update_reference(n);
        // Value increment after function call
        cout << "After function call value of n :" << n << endl;
    */
    /*
        // We can also use return type reference variable but it not good
        int n = 10;
        int ans = Return_ref(n); // Return an error because function inside variable is a local variable
        cout << "Return reference variable is :" << ans << endl;
    */

    // ARRAY
    /*
       //Below example is not good beacuse it dengerous for stack
       int n;
       cout<<"Enter n :";
       cin>>n:
       int arr[n];
    */
    /*
        int n;
        cout << "Enter n :";
        cin >> n;
        int *ptr = new int[n]; // Dynamic memory allocation
        for (int i = 0; i < n; i++)
        {
            cin >> i[ptr];
        }
        int ans = Get_Sum(ptr, n);
        cout << "Sum :" << ans << endl;
    */
    // DIFFERENCE BETWEEN STATIC ANS DYNAMI MEMORY ALLOCATION
    /*
        // initialization static memory location:->int arr[20]
        // total size of memory use 80byte
        //It automatically relise memory
        // while (true)
        // {
        //     int i = 5;
        // }

        // initialization dynamic memory location:->int *ptr=new arr[20];
        // total size of memory use 88byte
        // Menually relise memory
        // while (true)
        // {
        //     int *ptr = new int;
        // }
        //Delete keyword is used to delete request memory in the heap
        // int *i=new int;
        // delete i;//variable delete
        // int *arr=new int[9];
        // delete []arr;//Array delete
    */

    // 2D ARRAY DYNAMIC MEMORY ALLOCATION
    /*
        //Number of rows and columns both are same
        int n;
        cout << "Enter n:";
        cin >> n;
        int **arr = new int *[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "Print 2d array :" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    */
    /*
        // Number of rows and columns both are different
        int row,col;
        cout << "Enter row number:";
        cin >> row;
        cout << "Enter col number:";
        cin >> col;
        int **arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "Print 2d array :" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    */
    // Number of rows and columns both are different;Memory release
    int row, col;
    cout << "Enter row number:";
    cin >> row;
    cout << "Enter col number:";
    cin >> col;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Print 2d array :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //delete allocated memory space
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}