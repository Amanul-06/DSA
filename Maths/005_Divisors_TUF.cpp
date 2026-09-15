#include <bits/stdc++.h>

using namespace std;

void divisors(int n){
    vector<int> ans;
    for (int i=1; i*i<=n; i++){
        if (n%i==0){
            ans.push_back(i);
            if (i != n/i){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(auto it : ans) cout << it << " ";
}
int main()
{
    int n = 36;
    divisors(n);
    return 0;
}