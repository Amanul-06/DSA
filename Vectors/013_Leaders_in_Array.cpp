#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int> nums){
    int n = nums.size();
    vector<int> ans (0);
    int maxi = INT_MIN;
    for (int i=n-1; i>=0; i--){
        if(nums[i]> maxi){
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {1,2,5,4};
    vector<int> ans =leaders(nums);
    for(int i : ans){
        cout << i << " ";
    }
    return 0;
}