#include <iostream>
using namespace std;
/*
void Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

*/

/*
int Maximum(int arr[],int size){
    int maxi=arr[0];
    for (int i = 0; i < size; i++)
    {

        maxi=max(maxi,arr[i]); //In built function

        //OR

        // if (maxi<arr[i])
        // {
        //     maxi=arr[i];
        // }


    }

    return maxi;
}

*/

/*
int Minimum(int arr[],int size){
    int mini=arr[0];

    for (int i = 0; i < size; i++)
    {
        mini=min(mini,arr[i]);//In built function

    //OR


        // if (mini>arr[i])
        // {
        //     mini=arr[i];
        // }

    }
    return mini;
}

*/


//  HOMEWORK

// #1.Find sum of all the element 

int Element_sum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum + arr[i];
    }
    return sum;
    
}


int main()
{
    // decleartion
    int arr[10] = {10, 78, 8, 767, 6, 556, 4, 563, 56452, 7641};

    /*
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

*/

    // cout<<sizeof(arr)/sizeof(int);

    /*

        cout << "Maximum and minimum value is :" << Maximum(arr,10)<<" & "<<Minimum(arr,10);
    */


   //HOMEWORK

// #1
   cout<<"Sum of all element of an Array : "<<Element_sum(arr,10);
    return 0;
}