#include <iostream>
#include <vector>

using namespace std;

int longestConsecutive(vector<int>& nums){
    int n= nums.size();
    int count = 1;
    sort(nums.begin(), nums.end());
    int maxCount = INT_MIN;
    for(int i=1; i<n; i++){
        if(nums[i]==nums[i-1]){
            continue;
        }
        else if(nums[i]==nums[i-1]+1){
            count++;
        }
        else{
            count = 1;
        }
        maxCount = max(maxCount, count);
    }
    return maxCount;

}

int main () {
    vector<int> nums = {1, 2, 4, 5, 6, 7, 9, 10};
    int ans = longestConsecutive(nums);
    cout << ans;
    return 0;
}