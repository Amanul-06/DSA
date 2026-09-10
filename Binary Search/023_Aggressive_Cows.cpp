#include <bits/stdc++.h>

using namespace std;

int maxi(vector<int> nums){
    int ans = INT_MIN;
    for (int i : nums){
        ans = max(ans, i);
    }
    return ans;
}

int mini(vector<int> nums)
{
    int ans = INT_MAX;
    for (int i : nums)
    {
        ans = min(ans, i);
    }
    return ans;
}

bool isValid(vector<int> stalls, int c, int minDistance){
    sort(stalls.begin(), stalls.end());
    int count =1;
    int lastStallPos=stalls[0];
    int n = stalls.size();
    for (int i=1; i< n; i++){
        if(stalls[i]-lastStallPos >= minDistance){
            count ++;
            lastStallPos=stalls[i];
        }
        else continue;
    }
    if(count>=c) return true;
    else return false;
    
}

int aggressiveCows(vector<int> stalls, int c){
    int low = 1; 
    int high = maxi(stalls)-mini(stalls);
    int ans;
    while(low<=high){
        int mid = low + (high-low)/2;
        if (isValid(stalls, c, mid)){
            ans = mid;
            low = mid+1;
        }
        else{
            high =mid-1;
        }
    }
    return ans;
}

int main () {
    vector<int> stalls ={1,2,8,4,9};
    int c = 3;
    cout << aggressiveCows(stalls, c);
    return 0;
}