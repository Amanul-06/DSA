#include <iostream>
#include <vector>

using namespace std;

int mooresAlgo(vector <int> nums){
    int n = nums.size();
    int count = 0;
    int el;
    for (int i =0; i<n; i++){
        if (count == 0){
            el = nums[i];
            count = 1;
        }
        else if (nums[i] == el){
            count ++;
        }
        else {
            count --;
        }
    }
    return el;
}

int main () {
    vector<int> nums = {1,2,3,1,1,1,2,2,1,1,3,1,1,4,1,1};
    cout << mooresAlgo(nums);
    return 0;
}