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



    return 0;
}