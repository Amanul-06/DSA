#include <bits/stdc++.h>

using namespace std;

int armstrong(int n){
    int digits =0;
    int dup = n;
    while (n>0){
        digits ++;
        n /=10;
    }
    n=dup;
    int sum = 0;
    while (n>0){
        sum += pow(n%10,digits);
        n /=10;
    }
    return (sum==dup);

}

int main()
{
    int n = 1634;
    cout << armstrong(n);
    return 0;
}