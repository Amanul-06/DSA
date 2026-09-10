#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> nums, int k){
    int n = nums.size();
    for (int i =0; i<n; i++){
        if (nums[i]<=k){
            k++;
        }
        else {
            break;
        }
    }
    return k;
}

int main (){
    vector<int> nums = {2,3,4,7,11};
    int k = 5;
    cout << missingNumber(nums,k);
    return 0;
}