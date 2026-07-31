#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> nums){
    int n = nums.size();
    int low = 0, high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            if (nums[low] < ans)
            {
                ans = nums[low];
                index = low;
            }
            low++;
            high--;
            continue;
        }
        if(nums[low]<=nums[high]){
            if (nums[low] < ans){
                ans = nums[low];
                index = low;
            }            
            break;
        }
        if(nums[low]<=nums[mid]){
            if (nums[low] < ans)
            {
                ans = nums[low];
                index = low;
            }
            low = mid+1;
        }
        else{
            if (nums[mid] < ans)
            {
                ans = nums[mid];
                index = mid;
            }
            high = mid-1;
        }
    }
    return index;
}

int main () {
    vector<int> nums = {5, 6 ,7 ,9, 1,2,3,4};
    int ans = findMin(nums);
    cout << ans;
    return 0;
}