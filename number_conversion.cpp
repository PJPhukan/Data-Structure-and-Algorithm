#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int i = 0, ans = 0, n;
  cout << "Ente the number :";
  cin >> n;

  // decimal to binary number
  /*
  while (n!=0)
  {
    int bit=n&1;
    ans=(bit*pow(10,i))+ans;
    n= n >> 1;
    i++;
  }
 */

  // binary to decimal
  /*
  while (n!=0)
  {
       int value=n%10;
       ans=(value*pow(2,i)+ans);
       i++;
       n=n/10;
  }
  */

  // OR
  
  /*
  while (n != 0)
  {
    int bit = n % 10;
    if (bit == 1)
    {
      ans = pow(2, i) + ans;
    }
    n = n / 10;
    i++;
  }

  cout << ans << endl;
*/


  return 0;
}