#include <iostream>
#include <vector>

using namespace std;

int peak(vector<int> nums)
{
    int n = nums.size();
    int low = 1, high = n-2;
    while (low <= high){
        int mid = low + (high- low)/ 2;
        if (nums[mid]>nums[mid-1] && nums[mid]> nums[mid+1]){
            return mid;
        }
        if(nums[mid]>nums[mid-1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 4, 5, 6, 4, 3, 2};
    int ans = peak(nums);
    cout << ans;
    return 0;
}