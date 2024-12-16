#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

/*
//Top down approch
int fib(int n, vector<int> &dp)
{
    // base case
    if (n <= 1)
        return n;

    // check value of n is already exist or not
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    // step 1:
    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << n << " Number fibonacci : " << fib(n, dp) << endl;

    return 0;
}
*/

// buttom up approch (Tabulation)
int main()
{
    int n;
    cin >> n;
    // vector<int> dp(n + 1);

    // step 1: initialize first two fibonacci numbers
    // dp[0] = 0;
    // dp[1] = 1;
    int prev1 = 0;
    int prev2 = 1;
    int curr = -1;

    if(n==0){
        curr = 0;
    }
    // step 2: calculate fibonacci numbers from 2 to n
    for (int i = 2; i <= n; i++)
    {
        // dp[i] = dp[i - 1] + dp[i - 2];
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    // cout << n << " Number fibonacci : " << dp[n] << endl;
    cout << n << " Number fibonacci : " << curr << endl;
    return 0;
}