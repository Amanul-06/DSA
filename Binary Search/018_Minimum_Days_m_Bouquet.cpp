#include <iostream>
#include <vector>

using namespace std;

int possible(vector<int> bloomDay, int day, int m, int k){
    int consCounter = 0;
    int totalCounter = 0;
    for (int i: bloomDay){
        if(i<=day){
            consCounter ++;
        }
        else{  
            totalCounter = totalCounter + (consCounter/k);
            consCounter = 0;
        }
    }
    totalCounter = totalCounter + (consCounter / k);
    return totalCounter>=m;
} 
int minDay(vector<int> bloomDay){
    int ans = INT_MAX;
    for (int i: bloomDay){
        ans = min(ans, i);
    }
    return ans;
}
int maxDay(vector<int> bloomDay)
{
    int ans = INT_MIN;
    for (int i : bloomDay)
    {
        ans = max(ans, i);
    }
    return ans;
}
int minDays(vector<int> bloomDay, int m, int k)
{
    long long val = m * 1LL * k * 1LL;
    if (val > bloomDay.size()) return -1;
    int low = minDay(bloomDay);
    int high = maxDay(bloomDay);
    int ans;
    while (low <=high){
        int mid = (low + high)/2;
        if (possible(bloomDay, mid, m, k)==1){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    int m =2;
    int k= 3;
    cout << minDays(bloomDay, m,k) << endl;
    return 0;
}