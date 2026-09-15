#include <bits/stdc++.h>

using namespace std;

int maximum(vector<int> nums){
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(maxi, nums[i]);
    }
    return maxi;
}

int minimum(vector<int> nums){
    int n = nums.size();
    int mini = INT_MAX;
    for (int i=0; i<n; i++){
        if (nums[i]>0){
            mini = min(mini, nums[i]);
        }
    }
    return mini;
}

int beautySum(string s){
    int n = s.length();
    int totalBeauty=0;
    for (int i=0; i<n; i++){
        vector<int> freq(26,0);
        for (int j=i; j<n ;j++){
            freq[s[j]-'a']++;
            int beauty = maximum(freq) - minimum(freq);
            totalBeauty += beauty;
        }
    }
    return totalBeauty;
}

int main (){
    string s = "aabcbaa";
    cout << beautySum(s);
    return 0;
}
