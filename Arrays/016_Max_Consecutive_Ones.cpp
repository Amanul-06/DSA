#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> nums = {1,1,1,2,3,4,1,1,1,1,1,2,3,1,1,3};
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}