#include <bits/stdc++.h>

using namespace std;

int gcd(int n1, int n2){
    int gcd = 1;
    for (int i=1; i<min(n1,n2); i++){
        if (n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int n1 = 9;
    int n2 = 12;
    cout << gcd(n1, n2);
    return 0;
}