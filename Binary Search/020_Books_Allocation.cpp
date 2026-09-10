#include <bits/stdc++.h>

using namespace std;

int sumOfArr(vector <int> nums){
    int sum = 0;
    for (int i : nums){
        sum += i;
    }
    return sum;
}

bool isValid (vector<int> nums, int m, int maxPages){
    int n = nums.size();
    int pages = 0;
    int stu = 1;
    for (int i = 0; i<n; i++){
        if(nums[i]> maxPages){
            return false;
        }
        if(pages+nums[i] <= maxPages){
            pages+=nums[i];
        }
        else{
            stu++;
            pages=nums[i];

        }
    }
    if (stu<=m){
        return true;
    }
    else{
        return false;
    }
}

int allocateMinPages(vector<int> nums, int m){
    int n = nums.size();
    int low = 0;
    int high = sumOfArr(nums);
    int ans = -1;
    if (m>n) return -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if (isValid(nums, m, mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums ={2,1,3,4};
    int m = 2;
    cout << allocateMinPages(nums, m);
    return 0;
}