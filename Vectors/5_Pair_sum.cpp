#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum( vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    
    int i = 0, j = n-1;
    while (i<j){
        int sum = nums[i] + nums[j];
        if ( sum < target){
            i++;
        } else if ( sum > target){
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}
int main () {
    vector<int> nums = {2, 3, 7, 11, 15};
    int target = 9;
    vector<int> result = pairSum(nums, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}