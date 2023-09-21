/*1.Pattern:->1  2  3       
              1  2  3
              1  2  3
*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter n  :";
    cin>>n;
    i = 1;
   
    while (i <= n)
    {
       j=1;
       while (j<=n)
       {
        cout<<j<<"\t";
        j++;
       }
       cout<<endl;
       i++;
       
    }
    
    return 0;
}