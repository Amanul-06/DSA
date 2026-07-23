#include <iostream>
#include <vector>

using namespace std;

void removeZeroes(vector<int>& nums){
    int n = nums.size();
    int j = -1;
    for (int i =0 ; i <n; i++){
        if (nums[i] == 0){
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return;
    }

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
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