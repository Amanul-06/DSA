#include <iostream>
#include <vector>

using namespace std;

int floor(vector<int> nums, int target){
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high){
        int mid = (low + high)/2;
        if (nums[mid] <= target){
            ans = nums[mid];
            low = mid +1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int ceil(vector<int> nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] >= target){
            ans = nums[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main (){
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 2;
    int fl = floor(nums, target);
    int ce = ceil(nums, target);
    cout << "Floor: " << fl << endl;
    cout << "Ceil: " << ce;
    return 0;
}