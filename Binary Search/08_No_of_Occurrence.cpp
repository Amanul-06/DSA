#include <iostream>
#include <vector>

using namespace std;

int occurrence (vector<int> nums, int target){
    int n = nums.size();
    int low =0, high = n-1;
    int first = -1, last = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if (nums[mid]== target){
            first = mid;
            high = mid-1;
        }
        else if (nums[mid]< target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    low =0, high = n-1;
    while(low <= high){
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid]< target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return last-first+1 ;
}

int main (){
    vector<int> nums = {2, 4, 6, 8, 8, 8, 11, 13};
    int target = 8;
    int ans = occurrence(nums, target);
    cout << ans;
    return 0;
}