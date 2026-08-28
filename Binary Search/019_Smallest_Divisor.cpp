#include <iostream>
#include <vector>

using namespace std;

int maxi (vector<int> nums){
    int ans = INT_MIN;
    for (int i: nums){
        ans = max(ans, i);
    }
    return ans;
}

int sumOfD(vector<int> nums, int divisor){
    int sum =0;
    for (int i : nums){
        sum = sum+ ceil(double(i)/double(divisor));
    }
    return sum;
}

int smallestDivisor(vector<int> nums, int threshold){
    int n = nums.size();
    int low = 1;
    int high = maxi(nums);
    int ans;
    while(low<=high){
        int mid = (low+high)/2;
        if (sumOfD(nums,mid)<=threshold){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}

int main () {
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    int ans = smallestDivisor(nums, threshold);
    cout << ans;
    
    return 0;
}