#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector <int> nums){
    vector<vector<int>> ans;
    int n = nums.size();
    sort (nums.begin(), nums.end());
    for (int i=0; i<n; i++){
        if (i>0 && nums[i]==nums[i-1]) continue;
        int j = i+1, k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if (sum <0){
                j++;
            }
            else if (sum > 0){
                k--;
            }
            else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j<k && nums[j]== nums[j-1]) j++;
                while (j<k && nums[k]== nums[k+1]) k--;
            }
        }
    }
    return ans;
}

int main () {
    vector <int> nums = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    vector<vector<int>> ans = threeSum(nums);
    for (vector<int> arr : ans){
        for (int i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}