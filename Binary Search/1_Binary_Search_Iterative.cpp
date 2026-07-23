#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;
    while (low <= high){
        int mid = (low + high)/2;
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}

int main (){
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 13;
    int ans = binarySearch(nums, target);
    cout << ans;
    return 0;
}