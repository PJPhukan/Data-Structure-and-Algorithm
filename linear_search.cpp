#include<iostream>
using namespace std;

bool Search_linear(int arr[],int size,int n){
    for (int i = 0; i < size; i++)
    {
        if(n == arr[i]){
            return 1;
            break;
        }
    }
    return 0;
    
}

int main(){
    int arr[]={1,3,2,12,24,554,76,54,45,78};
if (Search_linear(arr,10,8))
{
    cout<<"8 is present in the array!";
}
else{
    cout<<"8 is not present in the array!";

}


    return 0;
}