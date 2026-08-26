#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

int longestConsecutive(vector<int>& nums){
    int n= nums.size();
    unordered_set<int> st;
    if (n==0) return 0;
    int maxCount = 1;
    for(int i=0; i<n; i++){
        st.insert(nums[i]);
    }

    for( auto it : st){
        if (st.find(it-1)== st.end()){
            int count = 1;
            int x = it;
            while (st.find(x+1) != st.end()){
                x+=1;
                count++;
            }
            maxCount=max(maxCount, count);
        }
    }
    return maxCount;

}

int main () {
    vector<int> nums = {1, 2, 4, 5, 6, 7, 9, 10};
    int ans = longestConsecutive(nums);
    cout << ans;
    return 0;
}