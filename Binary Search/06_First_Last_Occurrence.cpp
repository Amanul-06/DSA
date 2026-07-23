#include <iostream>
#include <vector>

using namespace std;

vector<int> occurrence (vector<int> nums, int target){
    int n = nums.size();
    if (n==0) return {-1,-1};
    int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (lb == n || nums[lb] != target)
    {
        return {-1,-1};
    }
    return {lb, ub-1};
}

int main (){
    vector<int> nums = {2, 4, 6, 8, 8, 8, 11, 13};
    int target = 8;
    vector<int> ans = occurrence(nums, target);
    for( int i : ans){
        cout << i << " ";
    }
    return 0;
}