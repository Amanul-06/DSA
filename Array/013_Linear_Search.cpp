#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 0, 4, 0, 6};
    int target = 4;
    int index = linearSearch(nums, target);
    cout << "Index of " << target << " is: " << index << endl;
    return 0;
}