#include <bits/stdc++.h>
using namespace std;

int missingNumber (vector<int> nums){
    int n = nums.size();
    int xor1=0, xor2=0;

    for (int i =1; i<=n; i++){
        xor1 ^= i;
        xor2 ^= nums[i-1];
    }
    xor1^=n+1;
    return xor1^xor2;
}

int main (){
    vector<int> nums = {1,2,3,4,5,6,8};
    cout << missingNumber(nums);
    return 0;
}