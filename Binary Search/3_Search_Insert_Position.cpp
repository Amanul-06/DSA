#include <iostream>
#include <vector>

using namespace std;

int lowerBound (vector<int> nums, int target){
    int n= nums.size();
    int ans = n;
    int low = 0, high = n-1;
    while (low <= high){
        int mid = (low + high)/2;
        if(nums[mid] >= target){
            ans= mid;
            high = mid-1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
}

int main (){
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 9;
    int ans = lowerBound(nums, target);
    cout << ans << endl;
    return 0;
}