#include <iostream> 
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string num){
    int n = num.length();
    string ans = "";
    for (int i = n-1; i>=0; i--){
        if ((num[i]-'0')%2==1){
            ans = num.substr(0,i+1);
            break;
        }
    }
    return ans;
}

int main (){
    string str = "123456";
    string ans = largestOddNumber(str);
    cout << ans;
    return 0;
}