#include <bits/stdc++.h>

using namespace std;

int countDigits (int n){
    int count =0;
    while(n>0){
        count ++;
        n=n/10;
    }
    return count;
}

int main (){
    int n = 17789;
    cout << countDigits(n);
    return 0;
}