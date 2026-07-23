#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> twoSum (vector<int> nums, int target){
    int n= nums.size();
    map<int, int> mpp;
    for (int i=0; i<n; i++){
        int complement = target - nums[i];
        if (mpp.find(complement) == mpp.end()){
            mpp[nums[i]]=i;
        }
        else{
            return {mpp[complement], i};
        }
    }
    return {-1,-1};

}

int main () {
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> ans = twoSum(nums, target);
    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}
