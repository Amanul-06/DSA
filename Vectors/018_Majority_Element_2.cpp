#include <iostream> 
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector <int> majorityElement(vector <int> nums){
    vector <int> ls;
    map <int, int> mpp;
    int n = nums.size();
    int target = int(n/3)+1;
    for (int i =0; i<n; i++){
        mpp[nums[i]]++;
        if (mpp[nums[i]]==target){
            ls.push_back(nums[i]);
        }
        if (ls.size() == 2) break;
    }
    sort(ls.begin(), ls.end());
    return ls;
}

int main (){
    vector <int> nums = {1,1,1,1,3,2,2,2};
    vector <int> ans = majorityElement(nums);
    for (int i : ans){
        cout << i << " ";
    }
    return 0;
}