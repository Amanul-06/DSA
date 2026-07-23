#include <iostream>
#include <map>
#include <vector>

using namespace std;

int maximumSum(vector<int> nums)
{
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;
    int start, ansStart, ansEnd;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += nums[i];
        if (sum > maxi)
        {
            ansStart = start;
            ansEnd = i;
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return maxi;
}

int main()
{
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ans = maximumSum(nums);
    cout << ans;
    return 0;
}
