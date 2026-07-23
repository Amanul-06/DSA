#include <iostream>
#include <map>
#include <vector>
using namespace std;

int maxSubArraySum( vector<int> nums, int target){
    int k = target;
    int n = nums.size();
    map <long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i =0; i<n; i++){
        sum += nums[i];
        if ( sum == k){
            maxLen = max ( maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);

        }
        if (preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum]=i;
        }
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