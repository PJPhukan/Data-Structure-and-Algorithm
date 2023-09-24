/*1.Pattern:->1  2  3
              1  2  3
              1  2  3
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter n  :";
    cin >> n;
    i = 1;

    /*1.Pattern:->1  2  3
                  1  2  3
                  1  2  3
    */
    /*
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
*/

    /* -----------------------------------*/

    /*2.Pattern:->  3  2  1
                    3  2  1
                    3  2  1
      */
    /*
       while (i <= n)
       {
           j = 1;
           while (j <= n)
           {
               cout << n - j + 1 << "\t";
               j++;
           }
           cout << endl;
           i++;
       }
*/

    /* -----------------------------------*/

    /*3.Pattern:->  1  2  3
                    4  5  6
                    7  8  9
      */
    /*
        int count = 1;
        while (i <= n)
        {
            j=1;
            while (j <= n)
            {
                cout << count << "\t";
                count++;
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*4.Pattern:->  *
     *  *
     *  *  *
     */
    /*

        while (i <= n)
        {
            j=1;
            while (j <= i)
            {
                cout << "*" << "\t";

                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*5.Pattern:->  1
                    2  2
                    3  3  3
     */
    /*

        while (i <= n)
        {
            j=1;
            while (j <= i)
            {
                cout << i << "\t";

                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*6.Pattern:->
                    1
                    2  3
                    4  5  6
     */
    /*
        int count=1;
        while (i <= n)
        {
            j=1;
            while (j <= i)
            {
                cout << count << "\t";
                count++;
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*7.Pattern:->
                    1
                    2  3
                    3  4  5
     */
    /*
        int count;
        while (i <= n)
        {
            j=1;
            count=i;
            while (j <= i)
            {
                cout << count << "\t";
                count++;
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*8.Pattern:->
                    1
                    2  3
                    3  4  5
     */
    /*
        int count;
        while (i <= n)
        {
            j=1;
            count=i;
            while (j <= i)
            {
                cout << count << "\t";
                count++;
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*9.Pattern:->
                    1
                    2  1
                    3  2  1
     */
    /*
        while (i <= n)
        {
            j = 1;

            while (j <= i)
            {
                cout <<( i - j + 1) << "\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /* -----------------------------------*/

    /*10.Pattern:->
                    A  A  A
                    B  B  B
                    C  C  C
     */
    /*
        while (i <= n)
        {
            j = 1;

            while (j <= n)
            {
                char ch='A' + i-1;
                cout <<ch << "\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /*11.Pattern:->
                    A  B  C
                    A  B  C
                    A  B  C
     */
    /*
        while (i <= n)
        {
            j = 1;

            while (j <= n)
            {
                char ch='A' + j-1;
                cout <<ch << "\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /*12.Pattern:->
                    A  B  C
                    D  E  F
                    G  H  I
     */
    /*
        int count=1;
        while (i <= n)
        {
            j = 1;

            while (j <= n)
            {
                char ch='A' + count-1;
                cout <<ch << "\t";
                j++;
                count++;
            }
            cout << endl;
            i++;
        }

*/

    /*13.Pattern:->
                    A  B  C
                    B  C  D
                    C  D  E
     */
    /*
        while (i <= n)
        {
            j = 1;
            int count=i;
            while (j <= n)
            {
                char ch='A' + count-1;
                cout <<ch << "\t";
                j++;
                count++;
            }
            cout << endl;
            i++;
        }

*/

    /*14.Pattern:->
                    A
                    B  B
                    C  C  C
     */
    /*
        while (i <= n)
        {
            j = 1;
            int count=i;
            while (j <= i)
            {
                char ch='A' + count-1;
                cout <<ch << "\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /*15.Pattern:->
                    A
                    B  C
                    C  D  E
     */
    /*
        int count=1;
        while (i <= n)
        {
            j = 1;
            while (j <= i)
            {
                char ch='A' + count-1;
                cout <<ch << "\t";
                j++;
                count++;
            }
            cout << endl;
            i++;
        }

*/


    /*16.Pattern:->
                    C
                    B  C
                    A  B  C
     */
    /*
        while (i <= n)
        {
        int count=n-i+1;
            j = 1;
            while (j <= i)
            {
                char ch='A' + count-1;
                cout <<ch << "\t";
                j++;
                count++;
            }
            cout << endl;
            i++;
        }

*/


    /*17.Pattern:->
                    C
                    B  C
                    A  B  C
     */
    /*
        while (i <= n)
        {
                char ch='A' + n-i;
            j = 1;
            while (j <= i)
            {
                cout <<ch << "\t";
                j++;
                ch++;
            }
            cout << endl;
            i++;
        }

*/


    /*18.Pattern:->
                            *
                        *   *
                    *   *   *
     */
    /*
        while (i <= n)
        {
            int space =n-i;
            j = 1;
            while (space>=1)
            {
                cout <<" " << "\t";
                 space--;
            }
            while(j<=i){
                cout<<"*"<<"\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/


    /*19.Pattern:->
                    *   *   *
                    *   *
                    *
     */
    /*
        while (i <= n)
        {
            int star =n-i+1;
            j = 1;
            while(j<=star){
                cout<<"*"<<"\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/


    /*20.Pattern:->
                    *   *   *
                        *   *
                            *
     */
    /*
        while (i <= n)
        {
            int space=i-1;
            int star =n-i+1;
            j = 1;
            while(space>=0){
                cout<<" "<<"\t";
                space--;
            }
            while(j<=star){
                cout<<"*"<<"\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /*21.Pattern:->
                    1   1   1
                        2   2
                            3
     */
    /*
        while (i <= n)
        {
            int space=i-1;
            int star =n-i+1;
            j = 1;
            while(space>=0){
                cout<<" "<<"\t";
                space--;
            }
            while(j<=star){
                cout<<i<<"\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/


    /*22.Pattern:->
                            1
                        2   2
                    3   3   3
     */
    /*
          while (i <= n)
        {
            int space =n-i;
            j = 1;
            while (space>=1)
            {
                cout <<" " << "\t";
                 space--;
            }
            while(j<=i){
                cout<<i<<"\t";
                j++;
            }
            cout << endl;
            i++;
        }

*/

    /*23.Pattern:->
                    1   2   3
                        2   3
                            4
     */
    /*
           while (i <= n){
            int space=i-1;
            int count=i;
            int star =n-i+1;
            j = 1;
            while(space>=0){
                cout<<" "<<"\t";
                space--;
            }
            while(j<=star){
                cout<<count<<"\t";
                j++;
                count++;
            }
            cout << endl;
            i++;
        }

*/

    /*24.Pattern:->
                            1
                        2   3
                    4   5   6
     */
    /*
            int count=1;
           while (i <= n){
            int space=n-i;
            j = 1;
            while(space>=1){
                cout<<" "<<"\t";
                space--;
            }
            while(j<=i){
                cout<<count<<"\t";
                j++;
                count++;
            }
            cout << endl;
            i++;
        }

*/


    /*25.Pattern:->
                            1
                        1   2   1
                    1   2   3   2   1
     */
    /*
           while (i <= n){
            int count=1;
            int space=n-i;
            j = 1;
            int right=i-1;
//space section

            while(space>=1){
                cout<<" "<<"\t";
                space--;
            }
//left tringle

            while(j<=i){
                cout<<count<<"\t";
                j++;
                count++;
            }
            count--;
//right tringle

            while(right>0){
                cout<<--count<<"\t";
                right--;
            }
            cout << endl;
            i++;
        }

*/



    /*26.Pattern:->
                    1   2   3   3   2   1
                    1   2   *   *   2   1
                    1   *   *   *   *   1
                            
     */
    /*
           while (i <= n){
                j=1;
                int range=n-i+1;
                int middle=i-1;
                int count=1;
//left section
                while (j<=range)
                {
                    cout<<count<<"\t";
                    count++;
                    j++;
                }
                count--;
                j=1;
//middle section
                while (middle>0)
                {
                    cout<<"*"<<"\t";
                    middle--;
                }
                middle=i-1;
                while (middle>0)
                {
                    cout<<"*"<<"\t";
                    middle--;
                }

                
//right section
                while(j<=range){
                    cout<<count<<"\t";
                    count--;
                    j++;
                }
                
                cout<<endl;
                i++;
                

        }

*/


    return 0;
}