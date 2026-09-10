#include <bits/stdc++.h>

using namespace std;

int maxi(vector<int> weights){
    int ans = INT_MIN;
    for (int i: weights){
        ans = max(ans, i);
    }
    return ans;
}

int sumOfArr(vector<int> weights){
    int sum = 0;
    for (int i : weights){
        sum+=i;
    }
    return sum;
}

int daysReq(vector<int> weights, int limit){
    int count = 1;
    int n= weights.size();
    int sum =0;
    for (int i =0; i<n; i++){
        sum += weights[i];
        if (sum >limit){
            count++;
            sum = weights[i];
        }
    }
    return count;
}


int shipWithinDays(vector<int> weights, int days){
    int low = maxi(weights);
    int high = sumOfArr(weights);
    int ans;
    while (low<=high){
        int mid = (low +high)/2;
        int req = daysReq(weights, mid);
        if (req<=days){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}



int main (){
    vector<int> weights = {3, 2, 2, 4, 1, 4};
    int days = 3;
    cout << shipWithinDays(weights, days);
    return 0;
}