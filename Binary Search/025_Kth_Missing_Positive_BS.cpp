#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> nums, int k){
    int n = nums.size();
    int low=0 , high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = nums[mid]-(mid+1);
        if (missing<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return k+low;
}

int main (){
    vector<int> nums = {2,3,4,7,11};
    int k = 5;
    cout << missingNumber(nums,k);
    return 0;
}