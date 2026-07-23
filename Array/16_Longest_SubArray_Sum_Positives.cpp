#include <iostream>
#include <map>
#include <vector>
using namespace std;

int maxSubArraySum( vector<int> nums, int target){
    int left = 0, right = 0;
    int k = target;
    long long sum = nums[0];
    int maxLen = 0;
    int n = nums.size();
    while ( right < n){
        while (left <= right && sum > k){
            sum -= nums[left];
            left++;

        }
        if( sum ==k) {
            maxLen = max( maxLen, right-left+1);
        }
        right++;
        if (right < n) sum += nums[right];

    }
    return maxLen;
}

int main () {
    vector<int> nums = { 1, 2, 3, 1, 1, 1, 1, 4, 2, 3 };
    int target = 3;
    int ans = maxSubArraySum(nums, target);
    cout << ans;
    return 0;
}