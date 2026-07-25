#include <iostream>
#include <vector>

using namespace std;

vector<int> unionArr(vector<int> nums1, vector<int> nums2)
{
    vector<int> result;
    int i = 0, j = 0;
    int n1 = nums1.size(), n2 = nums2.size();
    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            if (result.empty() ||
                result.back() != nums1[i])
            {
                result.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (result.back() != nums2[j])
            {
                result.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (result.back() != nums1[i])
        {
            result.push_back(nums1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (result.back() != nums2[j])
        {
            result.push_back(nums2[j]);
        }
        j++;
    }
    return result;
}

int main()
{
    vector<int> nums1 = {1, 1, 1, 2, 2, 3, 6};
    vector<int> nums2 = {1, 1, 2, 5};
    vector<int> result = unionArr(nums1, nums2);
    for (int it : result)
    {
        cout << it << " ";
    }
    return 0;
}