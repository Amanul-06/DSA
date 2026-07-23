#include <iostream>
#include <vector>

using namespace std;

void rightRotate(vector<int>& nums, int k){
    int n = nums.size();
    k=k%n;
    reverse(nums.begin(), nums.end()-k);
    reverse(nums.end()-k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main () {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    rightRotate(nums, 3);
    for (int val: nums){
        cout << val << " ";
    }
    return 0;
}