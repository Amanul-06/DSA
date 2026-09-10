#include <bits/stdc++.h>

using namespace std;

int sumOfArr(vector <int> nums){
    int sum = 0;
    for (int i : nums){
        sum += i;
    }
    return sum;
}

bool isValid(vector<int> nums, int m, int maxHours){
    int n = nums.size();
    int painter =1;
    int hours = 0;
    
    for (int i=0; i<n; i++){
        if (nums[i]>maxHours){
            return false;
        }
        if (hours+nums[i]<= maxHours){
            hours += nums[i];
        }
        else{
            painter ++;
            hours = nums[i];
        }
    }

    if (painter<= m){
        return true;
    }
    else {
        return false;
    }
}
int minTime(vector<int> nums, int m){
    int low = 0;
    int high = sumOfArr(nums);
    int ans;
    while (low<=high){
        int mid = low + (high-low)/2;
        if (isValid(nums, m, mid)){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }

    }
    return ans;
}

int main(){ 
    vector<int> boards ={40,30,10,20}; //length of each board
    int m = 2; // no of painters
    cout << minTime(boards, m);
    return 0;
}