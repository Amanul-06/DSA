#include <iostream> 
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string removeOuterParenthesis(string s){
    string ans = "";
    int balance = 0;
    for (char ch : s){
        if (ch == '(' && balance ==0){
            balance ++;
            continue;
        }
        else if(ch == ')' && balance == 1)
        {
            balance--;
            continue;
        }

        else {
            if (ch == '(')
                balance++;
            else if (ch == ')')
                balance--;
            ans= ans+ch;
        }
    }
    return ans;
}

int main (){
    string str = "(()())(())";
    string ans = removeOuterParenthesis(str);
    cout << ans;
    return 0;
}