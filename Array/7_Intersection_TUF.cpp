#include <iostream>
#include <vector>

using namespace std;

vector<int> intersection ( vector<int> &nums1, vector<int> &nums2)
{
    vector<int> result;
    int i = 0, j = 0;
    int n1 = nums1.size();
    int n2 = nums2.size();
    while ( i<n1 && j<n2){
        if (nums1[i]< nums2[j]){
            i++;
        }
        else if (nums1[i]> nums2[j]){
            j++;
        }
        else {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    
    return result;
}

int main()
{
    vector<int> nums1 = {1, 1, 1, 2, 2, 3, 6};
    vector<int> nums2 = {1, 1, 2, 5};
    vector<int> result = intersection(nums1, nums2);
    for (int it : result)
    {
        cout << it << " ";
    }
    return 0;
}