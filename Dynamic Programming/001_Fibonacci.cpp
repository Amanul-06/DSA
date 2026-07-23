#include <vector>
#include <iostream>

using namespace std;

//Fibonaci Recursion Code
int fib (int n){
    if (n<2) return n;
    return fib(n-1) + fib(n-2);
}

//Fibonacci DP Code - Memoization
int fibDP(int n, vector<int>& f){
    if (n < 2) return n;
    if (f[n != -1]) return f[n];
    return f[n] = fibDP(n - 1, f) + fibDP(n - 2, f);
}

//Fibonacci DP Code - Tabulation

int fibTabDP(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main (){
    int n = 6;

    vector<int> f(n + 1);
    int a = fibTabDP(6);
    cout << a;
    return 0;
}