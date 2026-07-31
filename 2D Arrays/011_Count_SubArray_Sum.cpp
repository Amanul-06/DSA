#include <iostream>
#include <vector>
#include <map>

using namespace std;


int countSubarrays(vector<int> nums, int target){
    int n = nums.size();
    unordered_map <int,int> mpp;
    mpp[0]=1;
    int preSum =0, count =0;
    for (int i =0; i<n; i++){
        preSum += nums[i];
        int remove = preSum -target;
        count += mpp[remove];
        mpp[preSum] += 1;
    }
    return count;
}

int main()
{
    vector<int> nums = {1,2,3};
    int target = 3;
    int ans = countSubarrays(nums, target);
    cout << ans;
    return 0;
}