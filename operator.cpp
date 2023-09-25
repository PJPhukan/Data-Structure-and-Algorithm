#include <iostream>
using namespace std;

int main()
{
    /*
        int a=2;
        int b=4;
        cout<<"a & b  :"<<(a&b )<<endl;//AND
        cout<<"a | b  :"<<(a|b )<<endl;//OR
        cout<<"~ b  :"<<(~b )<<endl;//NOT
        cout<<"~ a  :"<<(~a )<<endl; //NOT
        cout<<"a ^ b  :"<<(a^b )<<endl; //XOR

    */

    /*
        //In positive number padding always 0,but in negative number padding depends on compiler.(bitwise left & right operator)
        cout<<"3<<1  :"<<(3<<1)<<endl; //LEFT SHIFT (3*(2*1))
        cout<<"3<<1  :"<<(17<<2)<<endl; //LEFT SHIFT (17*(2*2))
        cout<<"3>>1  :"<<(3>>1)<<endl; //RIHGT SHIFT(3/(2*1))
        cout<<"3>>1  :"<<(17>>2)<<endl; //RIHGT SHIFT(17/(2*2))

    */

    /**/

    // Find output;

    /*
        //Task 1:
        int a,b=1;
        a=10;
        if(++a){
            cout<<b<<endl;
        }
        else{
            cout<<++b<<endl;
        }
    */
    /*
        //Task 2:
        int a=1;
        int b=2;
        if(a-- >0 && ++b >2){
            cout<<"Stage1 -Inside If "<<endl;
        }
        else{
            cout<<"Stage2 -Inside else"<<endl;
        }
        cout<<a<<"  "<<b<<endl;

    */

    /*
        //Task 3:
        int number=3;
        cout<<(25*(++number))<<endl;
    */
    /*
        //Task 4:
        int a=1;
        int b=a++;
        int c=++a;
        cout<<b <<endl<<c<<endl;
    */
    /*
        //Task 5:
        for(int i=0;i<=5;i++){
            cout<<i<<" ";
            i++;
        }
    */
    /*
        //Task 6:
        for(int i=0;i<=5;i--){
            cout<<i<<" ";
            i++;
        }
    */
    /*
        //Task 7:
        for(int i=0;i<=15;i+=2){
            cout<<i<<" ";
            if(i&1){
                continue;
            }
            i++;
        }
    */
    /*
        //Task 8:
        for(int i=0;i<=5;i++){
            for(int j=i;j<=5;j++){
                cout<<i<<"  " << j<<endl;
            }
            
        }
    */
    /*
        //Task 9:
        for(int i=0;i<5;i++){
            for(int j=i;j<=5;j++){
                if(i+j==10){
                    break;
                }
                cout<<i<<"  " << j<<endl;
            }
            
        }
    */

    /**/

 /*
        //For loop

        int n;
        cout<<"Enter n :";
        cin>>n;

        for(int i=0;i<=n;i++){
            cout<<i<<"\t";
        }

 */

 /*
        //Fibonacci series
        int a=0,b=1,n,sum=0;
        cout<<"Enter n:  ";
        cin>>n;
        for (int i = 0; i <= n; i++)
        {
            sum=a+b;
            a=b;
            b=sum;
            cout<<sum<<"\t";
        }


*/

/*
    // Check Prime or not

    int n, key = 0;
    cout << "Enter the number :";
    cin >> n;
    for (int i = 2; i < (n / 2); i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not Prime !";
            // exit(0);
            // i=n/2;
            break;
        }
        else
        {
            key = 1;
        }
    }
    if (key == 1)
    {
        cout << "Number is Prime !";
    }

*/

/**/


    return 0;
}