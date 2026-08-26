#include <iostream>
#include <vector>

using namespace std;

int func (int n, int m, int mid){
    long long ans = 1;
    for (int i=1; i<=n; i++){
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}
int nthRoot(int m, int n){
    int low = 1, high = m;
    int ans = 1;
    while (low <= high){
        int mid = low + (high -low)/2;
        long long midN = func(n, m, mid);
        if (midN == 1)
        {
            ans = mid;
            return ans;
        }
        else if (midN == 0){
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
    return -1;
}

int main()
{
    int m = 64;
    int n = 5;
    cout << nthRoot (m,n);
    return 0;
}