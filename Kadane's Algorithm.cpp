#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{

    // Three steps
    // 1. Add current element value with sum
    // 2. Maxi update
    // 3. if sum is less than 0 then sum set 0

    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
}

int main()
{
    vector<int> arr={12,-3,6};
    

    return 0;
}