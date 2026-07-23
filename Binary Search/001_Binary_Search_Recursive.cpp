#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> nums, int target, int low, int high){
    if(low > high){
        return -1;
    }
    int mid = (low + high)/2;
    if(nums[mid] == target){
        return mid;
    }
    else if (nums[mid] < target){
        return binarySearch(nums, target, mid+1, high);
    }
    else {
        return binarySearch(nums, target, low, mid-1);
    }
}

int main (){
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 9;
    int ans = binarySearch(nums, target, 0, nums.size()-1);
    cout << ans;
    return 0;
}