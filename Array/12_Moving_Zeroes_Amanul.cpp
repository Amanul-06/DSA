#include <iostream>
#include <vector>

using namespace std;

void removeZeroes(vector<int>& nums){
    int n = nums.size();
    int j = 0;
    for ( int i =0; i<n; i++){
        if (nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }
    }
    for (int i = j; i<n; i++){
        nums[i] = 0;
    }
}

int main () {
    vector<int> nums = {1, 2, 0, 4, 0, 6};
    removeZeroes(nums);
    for (int val: nums){
        cout << val << " ";
    }
    return 0;
}