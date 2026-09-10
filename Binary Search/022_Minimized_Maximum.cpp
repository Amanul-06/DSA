#include <bits/stdc++.h>

using namespace std;

int maxi(vector<int> nums){
    int ans = INT_MIN;
    for (int i : nums){
        ans = max(ans, i);
    }
    return ans;
}

bool isValid(vector<int> quantities, int n, int maxItems){
    int sum = 0;
    for (int i: quantities){
        sum+= (i+maxItems-1)/maxItems;
    }
    if(sum<=n) return true;
    else return false;
}

int minimizedMaximum(vector<int> quantities, int n){
    int low = 1; 
    int high = maxi(quantities);
    int ans;
    while(low<=high){
        int mid = low + (high-low)/2;
        if (isValid(quantities, n, mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low =mid+1;
        }
    }
    return ans;
}

int main () {
    vector<int> quantities ={15,10,10};
    int n = 7;
    cout << minimizedMaximum(quantities, n);
    return 0;
}