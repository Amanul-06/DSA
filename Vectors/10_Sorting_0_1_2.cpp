#include <iostream>
#include <map>
#include <vector>

using namespace std;

void mySort(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 2, 0, 1, 2, 1};
    mySort(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }

    return 0;
}
